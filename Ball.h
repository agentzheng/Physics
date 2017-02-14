#pragma once

#include<time.h>
#include<conio.h>
#include<graphics.h>
#include<cmath>

#define INI_X 320
#define INI_Y 320
#define INI_R 10 //单位 像素
#define INI_M 20.0 //单位 kg
#define PI 3.1415926535898
#define WIDTH 640
#define HEIGHT 640

class Ball 
{
private:
	int  r;
	double x, y, m, a, v,vtheta,atheta;
	void paint();
	void Bounce();
public:
	Ball();
	Ball(double _x, double _y, int _r, double _m, double _a, double _v,double _vtheta,double _atheta);
	void SetAtheta(double _atheta);
	void SetVtheta(double _vtheta);
	void SetAtheta(bool flag);
	void move();
	
};