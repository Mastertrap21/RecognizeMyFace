#pragma once
#include <Model\VideoStream.h>
namespace RecognizeMyFace {
	namespace Controller {
		using namespace RecognizeMyFace::Model;
		class RecognizerCtr
		{
		private:
			RecognizerCtr(){}
			VideoStream _videoStream;
			VideoStream _webcamStream;
			Picture _imageStream;
		public:	  
			static RecognizerCtr* Instance();
			void openWebcam();
			void openVideo(string filepath);
			void openImage(string filepath);
			void stopWebcam();
			FaceRecognizerResult recognizeWebcamFaces();
			FaceRecognizerResult recognizeImageFaces();
			FaceRecognizerResult recognizeVideoFaces();
		};
	}
}