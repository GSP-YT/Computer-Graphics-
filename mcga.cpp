#include<stdio.h>
#include<graphics.h>

void symmetry(int x,int y, int xc, int yc){
	putpixel(xc+x,yc-y,BLUE);
	putpixel(xc+y,yc-x,GREEN);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc+x,yc+y,YELLOW);
	putpixel(xc-x,yc+y,BLUE);
	putpixel(xc-y,yc+x,GREEN);
	putpixel(xc-y,yc-x,WHITE);
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

//int main(){
//	int x,y,r;
//	printf("Enter center(x,y), radius(r) : ");
//	scanf("%d%d%d",&x,&y,&r);
//	int gd = DETECT , gm;
//	initgraph(&gd,&gm,NULL);
//	drawCircle(x,y,r);
//	getch();
//	closegraph();
//	
//	return 0;
//}

int main(){
	int gd = DETECT , gm;
	initgraph(&gd,&gm,NULL);
	for(int i = 1 ; i <= 200; i += 1){
		drawCircle(300,230,i);
	}
	getch();
	closegraph();
	
	return 0;
}
