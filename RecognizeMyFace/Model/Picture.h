#pragma once
#include <opencv2/objdetect/objdetect.hpp>
#include <Model/FaceRecognizerResult.h>
#include <Model/FaceRecognizer.h>
namespace RecognizeMyFace {
	namespace Model {
		class Picture
		{
		private:
			cv::Mat _frame;
			FaceRecognizer _faceRecognizer;
			FaceRecognizerResult _faceRecognizerResult;
			vector<cv::Mat> _faces;
			vector<int> _labels;
		public:
			Picture();
			cv::Mat getFrame();
			void setFrame(cv::Mat frame);
			FaceRecognizer getFaceRecognizer();
			void setFaceRecognizer(FaceRecognizer faceRecognizer);
			FaceRecognizerResult getFaceRecognizerResult();
			void setFaceRecognizerResult(FaceRecognizerResult faceRecognizerResult);
			void setFaces(vector<cv::Mat> faces);
			vector<cv::Mat> getFaces();
			void setLabels(vector<int> labels);
			vector<int> getLabels();
			FaceRecognizerResult recognizeFaces();
			void openImage(string filename);
		};
	}
}
