#include "stdafx.h"
#include "RecognizerCtr.h"

namespace RecognizeMyFace {
	namespace Controller {
		RecognizerCtr* RecognizerCtr::Instance()
		{
			static RecognizerCtr instance;
			return &instance;
		}

		void RecognizerCtr::openWebcam()
		{
			_webcamStream.openWebcam();
			FaceRecognizer faceRecognizer;
			faceRecognizer = _webcamStream.getFaceRecognizer();
			faceRecognizer.loadCascade("haarcascade_frontalface_alt.xml");
			faceRecognizer.loadFaceRecognizer();
			_webcamStream.setFaceRecognizer(faceRecognizer);
		}

		void RecognizerCtr::openVideo(string filepath)
		{
			_videoStream.openVideo(filepath);
			FaceRecognizer faceRecognizer;
			faceRecognizer = _videoStream.getFaceRecognizer();
			faceRecognizer.loadCascade("haarcascade_frontalface_alt.xml");
			faceRecognizer.loadFaceRecognizer();
			_videoStream.setFaceRecognizer(faceRecognizer);
		}

		void RecognizerCtr::openImage(string filepath)
		{
			_imageStream.openImage(filepath);
			FaceRecognizer faceRecognizer;
			faceRecognizer = _imageStream.getFaceRecognizer();
			faceRecognizer.loadCascade("haarcascade_frontalface_alt.xml");
			faceRecognizer.loadFaceRecognizer();
			_imageStream.setFaceRecognizer(faceRecognizer);
		}

		void RecognizerCtr::stopWebcam()
		{
			_webcamStream.stopWebcam();
		}

		FaceRecognizerResult RecognizerCtr::recognizeWebcamFaces()
		{
			return _webcamStream.recognizeFaces();
		}

		FaceRecognizerResult RecognizerCtr::recognizeImageFaces()
		{
			return _imageStream.recognizeFaces();
		}

		FaceRecognizerResult RecognizerCtr::recognizeVideoFaces()
		{
			return _videoStream.recognizeFaces();
		}
	}
}

