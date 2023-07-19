#include "stdafx.h"
#include "FaceRecognizer.h"
#include <windows.h>
namespace RecognizeMyFace {
	namespace Model {
		FaceRecognizer::FaceRecognizer()
		{
		}

		cv::CascadeClassifier FaceRecognizer::getCascade()
		{
			return _cascade;
		}

		void FaceRecognizer::setCascade(cv::CascadeClassifier cascade)
		{
			_cascade = cascade;
		}

		void FaceRecognizer::loadCascade(string cascadeFilePath)
		{
			if(!_cascade.load(cascadeFilePath)) {
				//TODO: fail handler
			}
		}

		Ptr<cv::FaceRecognizer> FaceRecognizer::getFaceRecognizer()
		{
			return _faceRecognizer;
		}

		void FaceRecognizer::setFaceRecognizer(Ptr<cv::FaceRecognizer> faceRecognizer)
		{
			_faceRecognizer = faceRecognizer;
		}

		void FaceRecognizer::loadFaceRecognizer()
		{
			_faceRecognizer = createLBPHFaceRecognizer();
		}

		cv::Mat FaceRecognizer::getFrame()
		{
			return _frame;
		}

		void FaceRecognizer::setFrame(cv::Mat frame)
		{
			_frame = frame;
		}

		void FaceRecognizer::recognize(vector<Mat> &facesVect, vector<int> &labels, FaceRecognizerResult &faceRecognizerResult)
		{
			faceRecognizerResult.setOriginalFrame(getFrame());

			std::vector<cv::Rect> faces;
			cv::Mat inputImg, inputImg_gray, processedImg, crop, cropGray, res, gray;

			inputImg = getFrame().clone(); 
			processedImg = inputImg.clone();
			resize(inputImg, inputImg, Size(320, 240), 0, 0, INTER_CUBIC);
			cvtColor(inputImg, inputImg_gray, COLOR_BGR2GRAY);
			equalizeHist(inputImg_gray, inputImg_gray);

			// Detect faces
			getCascade().detectMultiScale(inputImg_gray, faces, 1.1, 3, 0 | CASCADE_SCALE_IMAGE, cv::Size(10, 10));

			// Set Region of Interest
			cv::Rect roi_b;
			cv::Rect roi_c;

			size_t ic = 0; // ic is index of current element
			int ac = 0; // ac is area of current element

			size_t ib = 0; // ib is index of biggest element
			int ab = 0; // ab is area of biggest element

			for (ic = 0; ic < faces.size(); ic++) // Iterate through all current elements (detected faces)

			{
				roi_c.x = faces[ic].x;
				roi_c.y = faces[ic].y;
				roi_c.width = (faces[ic].width);
				roi_c.height = (faces[ic].height);

				ac = roi_c.width * roi_c.height; // Get the area of current element (detected face)

				roi_b.x = faces[ib].x;
				roi_b.y = faces[ib].y;
				roi_b.width = (faces[ib].width);
				roi_b.height = (faces[ib].height);

				ab = roi_b.width * roi_b.height; // Get the area of biggest element, at beginning it is same as "current" element

				if (ac > ab)
				{
					ib = ic;
					roi_b.x = faces[ib].x;
					roi_b.y = faces[ib].y;
					roi_b.width = (faces[ib].width);
					roi_b.height = (faces[ib].height);
				}

				crop = inputImg(roi_b);
				resize(crop, res, cv::Size(128, 128), 0, 0, INTER_LINEAR);
				cvtColor(res, cropGray, COLOR_BGR2GRAY);
				int predicted_label = -1;
				double predicted_confidence = 0.0;
				int facesCount = facesVect.size();
				if(facesCount > 0)
				{
					try
					{
						_faceRecognizer->predict(cropGray, predicted_label, predicted_confidence);
					}
					catch(Exception e)
					{
						char s[256];
						for (int a=0;a<=e.msg.size();a++)
						{
							s[a]=e.msg[a];
						}
						OutputDebugStringA(s);
					}
				}
				char s[256];
				sprintf_s(s, "Label: %d, Confidence: %f",  predicted_label, predicted_confidence);
				OutputDebugStringA(s);
				if(predicted_label == -1 || predicted_confidence > 150)
				{
					facesVect.push_back(cropGray);
					facesCount++;
					faceRecognizerResult.setFacesCounter(faceRecognizerResult.getFacesCounter()+1);
					labels.push_back(facesCount);
					string filename = "faces/face" + std::to_string(facesCount) + ".jpg";
					imwrite(filename, crop);
					vector<cv::Mat> thisFaceVect;
					vector<int> thisLabels;
					thisFaceVect.push_back(cropGray);
					thisLabels.push_back(facesCount);
					try
					{
						_faceRecognizer->update(thisFaceVect, thisLabels);
					}
					catch(Exception e)
					{
						char s[256];
						for (int a=0;a<=e.msg.size();a++)
						{
							s[a]=e.msg[a];
						}
						OutputDebugStringA(s);
					}
				}
				else if(predicted_label != -1 && predicted_confidence > 50)
				{
					vector<cv::Mat> thisFaceVect;
					vector<int> thisLabels;
					thisFaceVect.push_back(cropGray);
					thisLabels.push_back(predicted_label);
					_faceRecognizer->update(thisFaceVect, thisLabels);
				}
				double widthFactor = processedImg.size().width / 320.0;
				double heightFactor = processedImg.size().height / 240.0;
				cv::Point pt1(faces[ic].x*widthFactor, faces[ic].y*heightFactor); // Display detected faces on main window - live stream from camera
				cv::Point pt2((faces[ic].x*widthFactor + faces[ic].height*heightFactor), (faces[ic].y*heightFactor + faces[ic].width*widthFactor));
				rectangle(processedImg, pt1, pt2, cv::Scalar(0, 255, 0), 2, 8, 0);
			}
			faceRecognizerResult.setProcessedFrame(processedImg);
		}
	}
}