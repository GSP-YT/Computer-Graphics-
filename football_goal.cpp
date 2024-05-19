#include<graphics.h>
#include<dos.h>
int main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"");
	
	//graound
	int point[] = {0,300,640,300,640,640,0,640,0,300};
	setcolor(GREEN);
	setfillstyle(1,GREEN);
	fillpoly(5,point);
	
	//boy
	setcolor(WHITE);
	circle(100,200,20);
	line(100,220,100,270);
	line(100,230,90,260);
	line(100,230,110,260);
	line(100,270,105,300);
	
	//ball
	setcolor(RED);
	setfillstyle(1,RED);
	circle(120,290,10);
	fillellipse(120,290,10,10);
	
	//goal
	setcolor(WHITE);
	ellipse(520,300,0,100,15,35);
	
	//kick
	for(int x = 80;x <= 110; x++){
		setcolor(WHITE);
		line(100,270,x,300 - x / 20);
		
		delay(20);
		
		setcolor(BLACK);
		line(100,270,x,300 - x / 20);
		
		setcolor(WHITE);
		line(100,270,105,300);
	}
	line(100,270,90,300);
	
	//ball move up
	for(int x = 0,y = 0;x < 200; x++,y++){
		
		setcolor(RED);
		setfillstyle(1,RED);
		circle(120 + x,290 - y,10);
		fillellipse(120 + x,290 - y,10,10);
		
		delay(20);
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(120 + x,290 - y,10);
		fillellipse(120 + x,290 - y,10,10);
	}
	//ball move down
	for(int x = 200,y = -200;y < 0; x++,y++){
		
		setcolor(RED);
		setfillstyle(1,RED);
		circle(120 + x,290 + y,10);
		fillellipse(120 + x,290 + y,10,10);
		
		delay(20);
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(120 + x,290 + y,10);
		fillellipse(120 + x,290 + y,10,10);
	}
	setcolor(RED);
	setfillstyle(1,RED);
	circle(520,290,10);
	fillellipse(520,290,10,10);
	
	//calebration
	setcolor(WHITE);
	settextstyle(3,4,20);
	outtextxy(500,200,"GOAL");
	
	getch();
	closegraph();
	return 0;
}
