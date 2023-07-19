#pragma once
#include <opencv2/highgui/highgui.hpp>
#include <Model/Picture.h>
#include <Model/FaceRecognizerResult.h>
namespace RecognizeMyFace {
	namespace Model {
		class VideoStream
		{
		private:
			cv::VideoCapture _videoCapture;
			FaceRecognizer _faceRecognizer;
			FaceRecognizerResult _faceRecognizerResult;
			vector<cv::Mat> _faces;
			vector<int> _labels;
		public:
			VideoStream();
			cv::VideoCapture getVideoCapture();
			void setVideoCapture(cv::VideoCapture videoCapture);
			Picture getPicture();
			void setFaceRecognizer(FaceRecognizer faceRecognizer);
			FaceRecognizer getFaceRecognizer();
			void setFaceRecognizerResult(FaceRecognizerResult faceRecognizerResult);
			FaceRecognizerResult getFaceRecognizerResult();
			void setFaces(vector<cv::Mat> faces);
			vector<cv::Mat> getFaces();
			void setLabels(vector<int> labels);
			vector<int> getLabels();
			FaceRecognizerResult recognizeFaces();
			void openWebcam();
			void openVideo(string filename);
			void stopWebcam();
		};
	}
}
