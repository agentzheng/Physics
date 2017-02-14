#pragma once

#include<time.h>
#include<conio.h>

#define INI_X 320
#define INI_Y 320
#define INI_R 20 //单位 像素
#define INI_M 20.0 //单位 kg

class Ball 
{
private:
	int x, y, r;
	double m, a, v,theta;
public:
	Ball();
	Ball(int _x, int _y, int _r, double _m, double _a, double _v,double _theta);
	void move();
};