#include<graphics.h>

int main(){
	int gd = DETECT;
	int gm;
	int arr1[] = {300,150, 400,300, 200,300, 300,150};
	int arr2[] = {300,130, 420,310, 180,310, 300,130};
	
	initgraph(&gd, &gm, (char*)"");
	drawpoly (4, arr1);
	drawpoly (4, arr2);
	getch();
	closegraph();
	
	return 0;
}
