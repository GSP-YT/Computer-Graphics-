#include<stdio.h> 
#include<conio.h> 
#include<dos.h> 
#include<graphics.h> 
 
int main() { 
	int gd=DETECT,gm; 
	float shx,shy; 
	initgraph(&gd,&gm,""); 
	
	line(100,0,200,0); 
	line(200,0,200,200); 
	line(200,200,100,200); 
	line(100,200,100,0); 
	
	printf("Enter shear factor shx along x-axis (0.0 - 1.0):"); 
	scanf("%f",&shx); 
	
	setcolor(GREEN); 
	line((100+(0*shx)),0,(200+(0*shx)),0); 
	line((200+(0*shx)),0,(200+(200*shx)),200); 
	line((200+(200*shx)),200,(100+(200*shx)),200); 
	line((100+(200*shx)),200,(100+(0*shx)),0); 
	
	printf("Enter shear factor shy along y-axis (0.0 - 1.0):"); 
	scanf("%f",&shy); 

	setcolor(RED);
	line(100,(shy*100),200,(shy*200)); 
	line(200,(shy*200),200,200+(shy*200)); 
	line(200,200+(shy*200),100,200+(shy*100)); 
	line(100,200+(shy*100),100,(shy*100));
	
	getch(); 
	closegraph();
	return 0;
} 
