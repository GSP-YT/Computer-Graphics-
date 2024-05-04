#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	
	//house
	setcolor(5);
	rectangle(50,80,150,200);
	rectangle(100,150,130,200);
	line(50,80,100,15);
	line(100,15,150,80);
	circle(100,60,10);
	
	//car
	setcolor(6);
	line(250, 100, 350, 100);
	line(225, 150, 250, 100);
	line(350, 100, 380, 150);
	line(200, 150, 420, 150);
	line(200, 150, 200, 200);
	line(420, 150, 420, 200);
	line(200, 200, 210, 200);
	line(420, 200, 410, 200);
	arc(230, 200, 0, 180, 20);
	arc(390, 200, 0, 180, 20);
	line(370, 200, 250, 200);
	circle(230, 200, 17);
	circle(390, 200, 17);
	
	
	//machhli
	setcolor(9);
	ellipse(520,200,30,330,90,30);
	circle(450,193,3);
	line(430,200,450,200);
	line(597,185,630,170);
	line(597,215,630,227);
	line(630,170,630,227);
	line(597,200,630,200);
	line(597,192,630,187);
	line(597,207,630,213);
	line(500,190,540,150);
	line(530,190,540,150);
	
	
	//putla
	setcolor(3);
	circle(150,250,35);
	line(150,285,150,400);
	line(150,300,120,330);
	line(150,300,180,330);
	line(150,400,120,430);
	line(150,400,180,430);
	outtextxy(230,350,"HI, This is Computer Graphics");
	
	
	getch();
	closegraph();
	return 0;
}
