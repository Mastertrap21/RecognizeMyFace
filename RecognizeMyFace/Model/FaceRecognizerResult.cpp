#include "stdafx.h"
#include "FaceRecognizerResult.h"


namespace RecognizeMyFace {
	namespace Model {
		FaceRecognizerResult::FaceRecognizerResult()
		{
			_facesCounter = 0;
		}

		cv::Mat FaceRecognizerResult::getOriginalFrame()
		{
			return _originalFrame;
		}

		void FaceRecognizerResult::setOriginalFrame(cv::Mat originalFrame)
		{
			_originalFrame = originalFrame;
		}

		cv::Mat FaceRecognizerResult::getProcessedFrame()
		{
			return _processedFrame;
		}
		void FaceRecognizerResult::setProcessedFrame(cv::Mat processedFrame)
		{
			_processedFrame = processedFrame;
		}

		int FaceRecognizerResult::getFacesCounter()
		{
			return _facesCounter;
		}

		void FaceRecognizerResult::setFacesCounter(int facesCounter)
		{
			_facesCounter = facesCounter;
		}
	}
}