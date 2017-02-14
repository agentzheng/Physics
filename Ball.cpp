#include"Ball.h"

Ball::Ball():x(INI_X),y(INI_Y),r(INI_R),m(INI_M),a(1000),v(100),vtheta(0),atheta(-1*PI/2){}
Ball::Ball(double _x, double _y, int _r, double _m, double _a, double _v, double _vtheta,double _atheta) : x(_x), y(_y), r(_r), m(_r), a(_a), v(_v), vtheta(_vtheta),atheta(_atheta) {}
void Ball::move()
{
	static time_t t0=clock();
	double dt=(clock()-t0)*1.0/CLOCKS_PER_SEC;
	t0=clock();
	double v_x = v*cos(vtheta) + a*cos(atheta)*dt;
	double v_y = v*sin(vtheta) + a*sin(atheta)*dt;
	vtheta = atan2(v_y,v_x);
	v = sqrt(v_x*v_x + v_y*v_y);
	double ds=v*dt;
	x+=ds*cos(vtheta);
	y-=ds*sin(vtheta);
	paint();
	dt=(clock()-t0)*1.0/CLOCKS_PER_SEC;
	Bounce();
}

void Ball::paint()
{
	setfillcolor(WHITE);
	solidcircle((int)x, (int)y,r);
	Sleep(5);
	setfillcolor(BLACK);
	solidcircle((int)x, (int)y, r);
}

void Ball::SetAtheta(double _atheta)
{
	atheta = _atheta;
}
void Ball::SetAtheta(bool flag)
{
	if (flag)
		atheta = vtheta + PI / 2;
}
void Ball::SetVtheta(double _vtheta)
{
	vtheta = _vtheta;
}

void Ball::Bounce()
{
	if (y + r >= HEIGHT)
	{
		y = HEIGHT - r;
		vtheta = -vtheta;
	}
	if (y - r <= 0)
	{
		y = r;
		vtheta = -vtheta;
	}
	if (x + r >= WIDTH)
	{
		x = WIDTH - r;
		vtheta = -PI - vtheta;
	}
	if (x - r <= 0)
	{
		x = r;
		vtheta = -PI - vtheta;
	}	
}