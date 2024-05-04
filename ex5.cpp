#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm,x=25,y=25,font=3,i;
	initgraph(&gd,&gm,"");
	for(i = 0; i < 5 ; font++, i++){
		settextstyle(font,HORIZ_DIR,font);// sets font type, font direction, size
		setcolor(font); // sets color for text.
		outtextxy(x,y,"Hello"); // prints message on screen at (x,y)
		y += 20 + 8 * i;
	}
	font = 3, y += 150;
	for(i = 1; i <= 5 ; font++, i++){
		settextstyle(font,VERT_DIR,font);// sets font type, font direction, size
		setcolor(font); // sets color for text.
		outtextxy(x,y,"Hi"); // prints message on screen at (x,y)
		x += 20 + 8 * i;
	}
	getch();
	closegraph();
	return 0;
}
