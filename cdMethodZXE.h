#pragma once
#ifndef cdMethodsZXE_H
#define cdMethodsZXE_H

#include <opencv2/opencv.hpp>

using namespace cv;

void cd_IRCD(vector<Point> ObjLinesXYt, double XYRf[4], float Tgf,int Tdist,int Tie, int Tns, int Tmd);

void funIRCD(string pathImage, cv::Mat &defResImg, float Tgf, int Tdist,int Tie,int Tns,bool doDisp=false);
#endif