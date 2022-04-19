#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("讀空氣問號.png");
    cvShowImage ("week09" , img);
    cvWaitKey(0);
}
