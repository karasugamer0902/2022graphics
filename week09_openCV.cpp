#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("0.jpg");
    cvShowImage ("week09" , img);
    cvWaitKey(0);
}
