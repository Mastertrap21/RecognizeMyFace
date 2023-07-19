#include "stdafx.h"
#include <windows.h>
#include "VideoStream.h"

namespace RecognizeMyFace {
	namespace Model {
		VideoStream::VideoStream()
		{
		}

		cv::VideoCapture VideoStream::getVideoCapture()
		{
			return _videoCapture;
		}

		void VideoStream::setVideoCapture(cv::VideoCapture videoCapture)
		{
			_videoCapture = videoCapture;
		}

		Picture VideoStream::getPicture()
		{
			Picture picture;
			cv::Mat frame;
			_videoCapture.read(frame);
			picture.setFrame(frame);
			picture.setFaceRecognizer(_faceRecognizer);
			picture.setFaces(_faces);
			picture.setLabels(_labels);
			return picture;
		}

		void VideoStream::setFaceRecognizer(FaceRecognizer faceRecognizer)
		{
			_faceRecognizer = faceRecognizer;
		}

		FaceRecognizer VideoStream::getFaceRecognizer()
		{
			return _faceRecognizer;
		}

		void VideoStream::setFaceRecognizerResult(FaceRecognizerResult faceRecognizerResult)
		{
			_faceRecognizerResult = faceRecognizerResult;
		}

		FaceRecognizerResult VideoStream::getFaceRecognizerResult()
		{
			return _faceRecognizerResult;
		}

		FaceRecognizerResult VideoStream::recognizeFaces()
		{
			Picture picture = getPicture();
			picture.setFaceRecognizerResult(_faceRecognizerResult);
			_faceRecognizerResult = picture.recognizeFaces();
			setFaces(picture.getFaces());
			setLabels(picture.getLabels());
			return _faceRecognizerResult;
		}

		void VideoStream::setFaces(vector<cv::Mat> faces)
		{
			_faces = faces;
		}

		vector<cv::Mat> VideoStream::getFaces()
		{
			return _faces;
		}

		void VideoStream::setLabels(vector<int> labels)
		{
			_labels = labels;
		}

		vector<int> VideoStream::getLabels()
		{
			return _labels;
		}

		void VideoStream::openWebcam()
		{
			_videoCapture.open(0);
		}

		void VideoStream::openVideo(string filename)
		{
			try
			{
				_videoCapture.open(filename);
			}
			catch(Exception e)
			{
				char s[256];
				strcpy(s,"test");
				for (int a=0;a<=e.msg.size();a++)
				{
					s[a]=e.msg[a];
				}
				OutputDebugStringA(s);
			}
		}

		void VideoStream::stopWebcam()
		{
			_videoCapture.release();
		}
	}
}