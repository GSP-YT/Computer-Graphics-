#include <graphics.h> 
#include <conio.h> 
int main() { 
	int gd=DETECT,gm,points[]={100,200,120,230,150,260,120,290,100,330,80,290,50,260,80,230,100,200}; 
	initgraph(&gd, &gm, ""); 
	
	setfillstyle(SOLID_FILL,10); //giving the type of fill 
	
	fillpoly(9, points); //drawing a polygon of 9 vertices with coordinates defined in points array and filling with color defined in setfillstyle function. 
	
	setfillstyle(XHATCH_FILL, RED); 
	circle(100, 100, 50); 
	floodfill(100, 100, WHITE); 
	
	setcolor(GREEN); 
	circle(250,100,50);
	
	fillellipse(250, 100, 50, 25);
	
	getch(); 
	closegraph(); 
	return 0; 
} 
