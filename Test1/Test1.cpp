#include <iostream>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;
int main(void)
{
    Mat image;
    image = imread("image.jpg");
    if (image.empty())
    {
        cout << "could not open or find the image" << endl;
        return -1;
    }
    namedWindow("Original", WINDOW_AUTOSIZE);
    imshow("Original", image);
    waitKey(0);
    
    return 0;
}
