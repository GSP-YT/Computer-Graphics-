#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int x,y,x1,y1,x2,y2,p,dx,dy;
	
	printf("Enter x1, y1, x2, y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    
    int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
    
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	putpixel(x,y,WHITE);
	p=(2*dy-dx);
	while(x<=x2){
		if(p<0){
			x += 1;
			p += 2*dy;
		} else {
			x += 1;
			y += 1;
			p += (2*dy)-(2*dx);
		}
		putpixel(x,y,WHITE);
	}
	getch();
	closegraph();
	
	return 0;
}
