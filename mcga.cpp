#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void symmetry(int x,int y, int xc, int yc,int d){
	putpixel(xc+x,yc-y,GREEN);
	delay(d);
	putpixel(xc+y,yc-x,GREEN);
	delay(d);
	putpixel(xc+y,yc+x,GREEN);
	delay(d);
	putpixel(xc+x,yc+y,GREEN);
	delay(d);
	putpixel(xc-x,yc+y,GREEN);
	delay(d);
	putpixel(xc-y,yc+x,GREEN);
	delay(d);
	putpixel(xc-y,yc-x,GREEN);
	delay(d);
	putpixel(xc-x,yc-y,GREEN);
	delay(d);
}

void drawCircle(int xc, int yc, int r,int d){
	int x = 0;
	int y = r;
	int p = 1 - r;
	symmetry(x,y,xc,yc,d);
	for(x = 0; y > x ; x++){
		if(p < 0){
			p += 2 * x + 3;
		} else {
			p += 2 * (x-y) + 5;
			y--;
		}
		symmetry(x,y,xc,yc,d);
		delay(d);
	}
}

int main(){
	int x,y,r,d;
	printf("Enter center - x, y : ");
	scanf("%d%d",&x,&y);
	printf("Enter R : ");
	scanf("%d",&r);
	printf("Enter annimation delay : ");
	scanf("%d",&d);
	int gd = DETECT , gm;
	initgraph(&gd,&gm,NULL);
	drawCircle(x,y,r,d);
	getch();
	closegraph();
	
	return 0;
}
