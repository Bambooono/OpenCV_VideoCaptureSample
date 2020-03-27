#include <opencv2/opencv.hpp>

int main() {


	cv::VideoCapture vcap(0);

	cv::Mat frame;

	while (vcap.read(frame)) {

		int key = cv::waitKey(1);

		cv::imshow("capture", frame);

		if (key == 'q')break;
	}

	vcap.release();

	return 0;
}