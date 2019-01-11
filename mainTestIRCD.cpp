#include<opencv2\opencv.hpp>   
#include<opencv2\highgui\highgui.hpp>
#include <windows.h>
#include "cdMethodZXE.h"

using namespace std;
using namespace cv;

#pragma comment(lib,"IRCDrelease32.lib")

int main()
{
	bool doDisp = true;//Note that: if doDisp=true, press any key to contine!
	//load image
	string pathImage1="imgBallSub2.png"; 
	string pathImage2="imgBallSub3.png"; 
	cv::Mat defResImg;
	int Tdist= 1 ;//%the threshold distance of inner points
	int Tct  = 500 ; //%the maximum of failure sample 3 points
	float T_GFC = 0.8 ;  
	int Tcv =10 ;
	funIRCD( pathImage1,defResImg,T_GFC,Tdist,Tct,Tcv, doDisp) ;//if doDisp=true, press any key to contine!
	funIRCD( pathImage2,defResImg,T_GFC,Tdist,Tct,Tcv, doDisp) ;//if doDisp=true, press any key to contine!
}
