#include <stdio.h>
#include <graphics.h>
#define RED 0;
#define YELLOW 1;
#define GREEN 2;
#define STOP 0;
#define SLOW 1;
#define GO 2;

void graphics();
void traffic_light();
void car_motion(int);

int main ()
{
	graphics();
	do
	{
		if(traffic_light()==RED)
		{
			car_motion(STOP);
		}
		if(traffic_light()==YELLOW)
		{
			car_motion(SLOW);
		}
		if(traffic_light()==GREEN)
		{
			car_motion(GO);
		}
	}while(1);
	getch();
	closegraph();
	return 0;
}

void graphics()
{
	initwindow(1920,1200,"Traffic Simulation System");
}

void traffic_light()
{
	d=d+5;
	if(d>0&&d<20)
	{
		putpixel(x,y,RED);
		return RED;
	}
	if(d>20&&d<50)
	{
		putpixel(x,y,YELLOW);
		return SLOW;
	}
	if(d>0&&d<20)
	{
		putpixel(x,y,GREEN);
		return GO;
	}
}

void car_motion(int signal);
{
	for(int i=0;i<maxx;i=i+5)
	{
		if(signal==STOP)
		{
			do
			{
				while(i<=370)
				{
				}
			}while(signal!=GO)
		//or decrease speed to 100000
		}
		if(signal==GO)
		{
		same logic
		}
		if(signal==SLOW)
		{
		speed=slow;
		}
	}
}
