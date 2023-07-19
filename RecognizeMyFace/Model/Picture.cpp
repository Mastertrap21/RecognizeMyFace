#include "stdafx.h"
#include "Picture.h"


namespace RecognizeMyFace {
	namespace Model {
		Picture::Picture()
		{
		}

		cv::Mat Picture::getFrame()
		{
			return _frame;
		}

		void Picture::setFrame(cv::Mat frame)
		{
			_frame = frame;
		}

		FaceRecognizer Picture::getFaceRecognizer()
		{
			return _faceRecognizer;
		}

		void Picture::setFaceRecognizer(FaceRecognizer faceRecognizer)
		{
			_faceRecognizer = faceRecognizer;
		}

		FaceRecognizerResult Picture::getFaceRecognizerResult()
		{
			return _faceRecognizerResult;
		}

		void Picture::setFaceRecognizerResult(FaceRecognizerResult faceRecognizerResult)
		{
			_faceRecognizerResult = faceRecognizerResult;
		}

		void Picture::setFaces(vector<cv::Mat> faces)
		{
			_faces = faces;
		}

		vector<cv::Mat> Picture::getFaces()
		{
			return _faces;
		}

		void Picture::setLabels(vector<int> labels)
		{
			_labels = labels;
		}

		vector<int> Picture::getLabels()
		{
			return _labels;
		}

		FaceRecognizerResult Picture::recognizeFaces()
		{
			_faceRecognizer.setFrame(getFrame());
			_faceRecognizer.recognize(_faces, _labels, _faceRecognizerResult);
			return _faceRecognizerResult;
		}

		void Picture::openImage(string filename)
		{
			_frame = imread(filename);
		}
	}
}
