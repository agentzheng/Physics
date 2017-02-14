#include"Ball.h"

Ball::Ball():x(INI_X),y(INI_Y),r(INI_R),m(INI_M),a(0),v(0),theta(0){}
Ball::Ball(int _x, int _y, int _r, double _m, double _a, double _v,double _theta):x(_x),y(_y),r(_r),m(_r),a(_a),v(_v),theta(_theta){}
void Ball::move()
{
	static time_t t0=clock();
	int t=(clock()-t0)/CLOCKS_PER_SEC;
	if(!kbhit())
	{

	}

}
