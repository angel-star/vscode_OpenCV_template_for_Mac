// main.cpp
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;
int main(int argc, char **argv)
{
	// Mat img = cv::imread(argv[1], -1);
	// // std::cout << argv[1] << endl;
	// if (img.empty())
	// 	return -1;
	// cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
	// cv::imshow("Example1", img);
	// cv::waitKey(0);
	// cv::destroyWindow("Example1");
	// return 0;
	Mat img = imread("/Users/zjx/Desktop/123.png");
	cv::imshow("image", img);
	cv::waitKey();
	return 0;
}