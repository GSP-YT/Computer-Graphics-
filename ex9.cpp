#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
#include<process.h> 
#include<graphics.h> 

void trans(int x1, int x2, int y1, int y2){ 
	int a1,a2,b1,b2,dep,x,y; 
	printf("Enter the Translation Distances (x,y):"); 
	scanf("%d%d",&x,&y); 
	a1=x1+x; 
	a2=x2+x; 
	b1=y1+y; 
	b2=y2+y; 
	dep=(a2-a1)/4; 
	bar3d(a1,b1,a2,b2,dep,1); 
} 

void scale(int x1, int x2, int y1, int y2, int mx, int my){ 
	int x,y,a1,a2,b1,b2,dep,tx,ty; 
	printf("Enter scaling Factors (x,y):"); 
	scanf("%d%d",&x,&y); 
	
	printf("Enter the Translation Distances for scaled fig. (x,y):"); 
	scanf("%d%d",&tx,&ty); 
	x1+=tx; 
	x2+=tx; 
	y1+=ty; 
	y2+=ty; 
	
	a1=mx+(x1-mx)*x; 
	a2=mx+(x2-mx)*x; 
	b1=my+(y1-my)*y; 
	b2=my+(y2-my)*y; 
	dep=(a2-a1)/4; 
	bar3d(a1,b1,a2,b2,dep,1);
} 

void rotate(int x1, int x2, int y1, int y2, int mx, int my){ 
	float t; 
	int a1,b1,a2,b2,dep,tx,ty; 
	printf("Enter the angle to rotate="); 
	scanf("%f",&t); 
	
	printf("Enter the Translation Distances for rotated fig. (x,y):"); 
	scanf("%d%d",&tx,&ty); 
	x1+=tx; 
	x2+=tx; 
	y1+=ty; 
	y2+=ty; 
	
	t=t*(3.14/180); 
	a1=mx+(x1-mx)*cos(t)-(y1-my)*sin(t); 
	a2=mx+(x2-mx)*cos(t)-(y2-my)*sin(t); 
	b1=my+(x1-mx)*sin(t)-(y1-my)*cos(t); 
	b2=my+(x2-mx)*sin(t)-(y2-my)*cos(t); 
	if(a2>a1) 
		dep=(a2-a1)/4; 
	else 
		dep=(a1-a2)/4;
	bar3d(a1,b1,a2,b2,dep,1);
}

int main() { 
	int gd=DETECT,gm,c,x1,x2,y1,y2,mx,my,depth; 
	printf("Enter 1st top value(x1,y1):"); 
	scanf("%d%d",&x1,&y1); 
	printf("Enter right bottom value(x2,y2):"); 
	scanf("%d%d",&x2,&y2); 
	initgraph(&gd,&gm,""); 
	depth=(x2-x1)/4; 
	mx=(x1+x2)/2; 
	my=(y1+y2)/2; 
	bar3d(x1,y1,x2,y2,depth,1); 
	
	setcolor(5); 
	trans(x1,x2,y1,y2); 
	
	setcolor(7); 
	scale(x1,x2,y1,y2,mx,my);
	
	setcolor(9); 
	rotate(x1,x2,y1,y2,mx,my);
	
	getch(); 
	closegraph();
 	return 0;
} 
