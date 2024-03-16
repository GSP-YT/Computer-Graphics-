#include<stdio.h>
#include<graphics.h>

void symmetry(int x,int y, int xc, int yc){
	putpixel(xc+x,yc-y,RED);
	putpixel(xc+y,yc-x,GREEN);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc+x,yc+y,YELLOW);
	putpixel(xc-x,yc+y,GREEN);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc-y,yc-x,BLUE);
	putpixel(xc-x,yc-y,YELLOW);
}

void drawCircle(int xc, int yc, int r){
	int x = 0;
	int y = r;
	int p = 1 - r;
	symmetry(x,y,xc,yc);
	for(x = 0; y > x ; x++){
		if(p < 0){
			p += 2 * x + 3;
		} else {
			p += 2 * (x-y) + 5;
			y--;
		}
		symmetry(x,y,xc,yc);
	}
}

int main(){
	int x,y,r;
	printf("Enter center - x, y : ");
	scanf("%d%d",&x,&y);
	printf("Enter R : ");
	scanf("%d",&r);
	int gd = DETECT , gm;
	initgraph(&gd,&gm,NULL);
	drawCircle(x,y,r);
	getch();
	closegraph();
	
	return 0;
}
