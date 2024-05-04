#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<math.h> 
int main() { 
	int gd=DETECT,gm; 
	int x1,y1,x2,y2,tx,ty,x3,y3,x4,y4; 
	printf("Enter the starting point of line segment: "); 
	scanf("%d %d",&x1,&y1); 
	printf("Enter the ending point of line segment: "); 
	scanf("%d %d",&x2,&y2); 
	
	initgraph(&gd,&gm,""); 
	
	printf("Enter translation distances tx,ty: "); 
	scanf("%d%d",&tx,&ty); 
	int sx,sy;
	printf("Enter scaling factors sx,sy: "); 
	scanf("%d%d",&sx,&sy); 
	float a,t;
	printf("Enter angle for rotation: "); 
	scanf("%f",&a); 
	
	setcolor(WHITE); 
	line(x1,y1,x2,y2); 
	outtextxy(x2+2,y2+2,"Original line"); 
	x3=x1+tx; 
	y3=y1+ty; 
	x4=x2+tx; 
	y4=y2+ty; 
	setcolor(YELLOW); 
	line(x3,y3,x4,y4); 
	outtextxy(x4+2,y4+2,"Line after translation");
	
	
	x3=x1*sx; 
	y3=y1*sy; 
	x4=x2*sx; 
	y4=y2*sy; 
	setcolor(RED); 
	line(x3,y3,x4,y4); 
	outtextxy(x3+2,y3+2,"Line after scaling"); 
	
	
	t=a*(3.14/180); 
	x3=(x1*cos(t))-(y1*sin(t)); 
	y3=(x1*sin(t))+(y1*cos(t)); 
	x4=(x2*cos(t))-(y2*sin(t)); 
	y4=(x2*sin(t))+(y2*cos(t)); 
	setcolor(GREEN); 
	line(x3,y3,x4,y4); 
	outtextxy(x3+2,y3+2,"Line after rotation");
	
	
	getch(); 
	closegraph();
	return 0;
} 
