// C program to simulate Intelligent Agent through Traffic control system
#include <graphics.h>
#include <stdio.h>

void car();

int main()
{
	initwindow(800,600);
	car();
	getch();
	closegraph();
	return 0;
}

void car(void)
{
	int maxx,midy;
	maxx = getmaxx();
    midy = getmaxy()/2;							//Middle of the screen
    int d=0;
    static int move=0;
 	for (static int i=0; i < maxx; i=i+5) 
	{
        cleardevice();							//Clears screen
        //Draw a white road
		setcolor(WHITE);						
    	line(0, midy + 53, maxx, midy + 53);
    	line(0, midy - 100, maxx, midy - 100);
    	//traffic light
    	bar(maxx-150,midy-180,maxx-140,midy-100);
		bar(600,midy-180,maxx-150,midy-170);
		rectangle(500,midy-200,600,midy-160);
		//bar(500,midy-200,600,midy-160);
		if(GetAsyncKeyState(VK_RIGHT))
		{d++;
		}
		if(d<5)
		{
		setfillstyle(SOLID_FILL,4);
      	circle(520,116,10);
    	floodfill(520,116,15);
    	move=1;
		}
		/*else if(d>120&&d<200)
		{
    	setfillstyle(SOLID_FILL,14);
      	circle(550,116,10);
    	floodfill(550,116,15);
    	//move=2;
    	}*/
		if(d>=5)
		{
		setfillstyle(SOLID_FILL,2);
      	circle(580,116,10);
    	floodfill(580,116,15);
		}
		//zebra crossing
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,15);
		bar(500,midy-93,maxx-150,midy-80);
    	bar(500,midy-77,maxx-150,midy-64);
		bar(500,midy-61,maxx-150,midy-48);
		bar(500,midy-45,maxx-150,midy-32);
		bar(500,midy-29,maxx-150,midy-16);
		bar(500,midy-13,maxx-150,midy);
		bar(500,midy+3,maxx-150,midy+16);
		bar(500,midy+19,maxx-150,midy+32);
		bar(500,midy+35,maxx-150,midy+48);
		//overtake lines
		//top line
		bar(5,midy-93,maxx-645,midy-80);
		bar(maxx-640,midy-93,maxx-485,midy-80);
		bar(maxx-480,midy-93,maxx-320,midy-80);
		bar(maxx-120,midy-93,maxx,midy-80);
		//lowest line
		bar(5,midy+35,maxx-645,midy+48);
		bar(maxx-640,midy+35,maxx-485,midy+48);
		bar(maxx-480,midy+35,maxx-320,midy+48);
		bar(maxx-120,midy+35,maxx,midy+48);
		//middle line
		bar(60,midy-29,maxx-610,midy-16);
		bar(maxx-500,midy-29,maxx-380,midy-16);
		bar(maxx-80,midy-29,maxx,midy-16);		
 	 //Draw Car
        if(move==0)
		{
		setcolor(WHITE);
        //setfillstyle(SOLID_FILL, RED);
        line(i, midy + 23, i, midy);
        line(i, midy, 40 + i, midy - 20);
        line(40 + i, midy - 20, 80 + i, midy - 20);
        line(80 + i, midy - 20, 100 + i, midy);
        line(100 + i, midy, 120 + i, midy);
        line(120 + i, midy, 120 + i, midy + 23);
        line(0 + i, midy + 23, 18 + i, midy + 23);
        arc(30 + i, midy + 23, 0, 180, 12);
        line(42 + i, midy + 23, 78 + i, midy + 23);
        arc(90 + i, midy + 23, 0, 180, 12);
        line(102 + i, midy + 23, 120 + i, midy + 23);
        line(28 + i, midy, 43 + i, midy - 15);
        line(43 + i, midy - 15, 57 + i, midy - 15);
        line(57 + i, midy - 15, 57 + i, midy);
        line(57 + i, midy, 28 + i, midy);
        line(62 + i, midy - 15, 77 + i, midy - 15);
        line(77 + i, midy - 15, 92 + i, midy);
        line(92 + i, midy, 62 + i, midy);
        line(62 + i, midy, 62 + i, midy - 15);
        //floodfill(5 + i, midy + 22, YELLOW);
        //setcolor(BLUE);
        //setfillstyle(SOLID_FILL, DARKGRAY);
        /*  Draw Wheels */
        circle(30 + i, midy + 25, 9);
        circle(90 + i, midy + 25, 9);
        //floodfill(30 + i, midy + 25, BLUE);
        //floodfill(90 + i, midy + 25, BLUE);
        delay(50);
    }
    else if(move=1)
	{
		do{
		if(d==0)
		{
		setcolor(WHITE);
        //setfillstyle(SOLID_FILL, RED);
        line(i, midy + 23, i, midy);
        line(i, midy, 40 + i, midy - 20);
        line(40 + i, midy - 20, 80 + i, midy - 20);
        line(80 + i, midy - 20, 100 + i, midy);
        line(100 + i, midy, 120 + i, midy);
        line(120 + i, midy, 120 + i, midy + 23);
        line(0 + i, midy + 23, 18 + i, midy + 23);
        arc(30 + i, midy + 23, 0, 180, 12);
        line(42 + i, midy + 23, 78 + i, midy + 23);
        arc(90 + i, midy + 23, 0, 180, 12);
        line(102 + i, midy + 23, 120 + i, midy + 23);
        line(28 + i, midy, 43 + i, midy - 15);
        line(43 + i, midy - 15, 57 + i, midy - 15);
        line(57 + i, midy - 15, 57 + i, midy);
        line(57 + i, midy, 28 + i, midy);
        line(62 + i, midy - 15, 77 + i, midy - 15);
        line(77 + i, midy - 15, 92 + i, midy);
        line(92 + i, midy, 62 + i, midy);
        line(62 + i, midy, 62 + i, midy - 15);
        //floodfill(5 + i, midy + 22, YELLOW);
        //setcolor(BLUE);
        //setfillstyle(SOLID_FILL, DARKGRAY);
        /*  Draw Wheels */
        circle(30 + i, midy + 25, 9);
        circle(90 + i, midy + 25, 9);
        //floodfill(30 + i, midy + 25, BLUE);
        //floodfill(90 + i, midy + 25, BLUE);
        delay(50);
    }
	}while(i>370);
	}
	
}
}
