#pragma once
#include <opencv2/objdetect/objdetect.hpp>
namespace RecognizeMyFace {
	namespace Model {
		class FaceRecognizerResult
		{
		private:
			cv::Mat _originalFrame;
			cv::Mat _processedFrame;
			int _facesCounter;
		public:
			FaceRecognizerResult();
			cv::Mat getOriginalFrame();
			void setOriginalFrame(cv::Mat originalFrame);
			cv::Mat getProcessedFrame();
			void setProcessedFrame(cv::Mat processedFrame);
			int getFacesCounter();
			void setFacesCounter(int facesCounter);
		};
	}
}
