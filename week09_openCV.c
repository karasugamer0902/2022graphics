#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("Ū�Ů�ݸ�.png");
    cvShowImage ("week09" , img);
    cvWaitKey(0);
}
