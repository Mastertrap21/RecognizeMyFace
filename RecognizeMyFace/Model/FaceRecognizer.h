#pragma once
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/contrib/contrib.hpp>
#include <Model/FaceRecognizerResult.h>
namespace RecognizeMyFace {
	namespace Model {
		using namespace cv;
		using namespace RecognizeMyFace::Model;
		class FaceRecognizer
		{
		private:
			cv::CascadeClassifier _cascade;
			cv::Mat _frame;
			Ptr<cv::FaceRecognizer> _faceRecognizer;
		public:
			FaceRecognizer();
			cv::CascadeClassifier getCascade();
			void setCascade(cv::CascadeClassifier cascade);
			void loadCascade(string cascadeFilePath);
			Ptr<cv::FaceRecognizer> getFaceRecognizer();
			void setFaceRecognizer(Ptr<cv::FaceRecognizer> faceRecognizer);
			void loadFaceRecognizer();
			cv::Mat getFrame();
			void setFrame(cv::Mat frame);
			void recognize(vector<cv::Mat> &faces, vector<int> &labels, FaceRecognizerResult &faceRecognizerResult);
		};
	}
}
