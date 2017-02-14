#include<iostream>
#include"Ball.h"
using namespace std;

int main()
{
	initgraph(WIDTH , HEIGHT);
	Ball a;
	while (!_kbhit())
	{
		static double _atheta =0;
		a.SetAtheta(true);
		a.move();
	}
	_getch();
	closegraph();
}