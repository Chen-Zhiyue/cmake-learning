#include <iostream>
#include <opencv2/opencv.hpp>

std::string filePath = "F:\\Opencv\\opencv\\sources\\samples\\data\\lena.jpg";

int main()
{
    cv::Mat img;
    img = cv::imread(filePath); // 这里放你图片的绝对路径，注意是双斜杠
    cv::imshow("show", img);
    cv::waitKey(0);

    return 0;
}
