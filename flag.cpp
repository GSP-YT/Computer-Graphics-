#include<graphics.h>
int main(){
	int gd = DETECT;
	int gm;
	int arr[] = {200, 50, 
				400, 50, 
				400, 200, 
				200, 200, 
				200, 450,
				180,450,
				180,50,
				200,50,
				200,200};
	initgraph(&gd, &gm, (char*)"");
	drawpoly(9, arr);
	circle(300,125,24);
	line(200,100,400,100);
	line(200,150,400,150);
	getch();
	closegraph();
	
	return 0;
}
