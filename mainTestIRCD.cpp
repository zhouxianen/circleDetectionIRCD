#include<opencv2\opencv.hpp>   
#include<opencv2\highgui\highgui.hpp>
#include <windows.h>
#include "cdMethodZXE.h"

using namespace std;
using namespace cv;
 
int main()
{
	bool doDisp = true;//Note that: if doDisp=true, press any key to contine!
	//load image
	string pathImage1="imgBallSub2.png"; 
	string pathImage2="imgBallSub3.png"; 
	cv::Mat defResImg;
	int Tdist= 1 ;//%the threshold distance of inner points
	int Tie  = 100 ; //%the maximum of failure sample 3 points
	int Tmd  = 5; //the minimum distance between any two points
	funIRCD( pathImage1,defResImg,Tdist,Tie,Tmd, doDisp) ;//if doDisp=true, press any key to contine!
	funIRCD( pathImage2,defResImg,Tdist,Tie,Tmd, doDisp) ;//if doDisp=true, press any key to contine!

}