#include "Canvas.h"
#define _CRT_SECURE_NO_WARNINGS



int main()
{
	Canvas can(100,100);
	can.DrawRect(1,1,20,10,'.');
	can.FillRect(1,1, 20, 10, '#');
	can.DrawLine(1, 25, 10, 60, '&');
	can.SetPoint(5, 25, '$');
	can.DrawCircle(50, 50, 15, '.');
	can.FillCircle(50, 50, 15, '.');
	can.Print();

}