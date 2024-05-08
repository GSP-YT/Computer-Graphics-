#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 

 
void flood4(int x,int y, int fill_col, int old_col) { 
	if(getpixel(x,y)==old_col) { 
//		delay(5); 
		putpixel(x,y,fill_col); 
		flood4(x+1,y,fill_col,old_col); 
		flood4(x-1,y,fill_col,old_col); 
		flood4(x,y+1,fill_col,old_col); 
		flood4(x,y-1,fill_col,old_col);
	} 
}

void flood8(int x,int y, int fill_col, int old_col) { 
	if(getpixel(x,y)==old_col) { 
//		delay(5); 
		putpixel(x,y,fill_col); 
		flood8(x+1,y,fill_col,old_col); 
		flood8(x-1,y,fill_col,old_col); 
		flood8(x,y+1,fill_col,old_col); 
		flood8(x,y-1,fill_col,old_col); 
		flood8(x + 1, y - 1, fill_col, old_col); 
		flood8(x + 1, y + 1, fill_col, old_col); 
		flood8(x - 1, y - 1, fill_col, old_col); 
		flood8(x - 1, y + 1, fill_col, old_col);
	} 
}

void boundary_fill4(int x, int y, int fcolor, int bcolor) { 
	if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor)) { 
//		delay(10); 
		putpixel(x, y, fcolor); 
		boundary_fill4(x + 1, y, fcolor, bcolor); 
		boundary_fill4(x - 1, y, fcolor, bcolor); 
		boundary_fill4(x, y + 1, fcolor, bcolor); 
		boundary_fill4(x, y - 1, fcolor, bcolor); 
	} 
} 

void boundary_fill8(int x, int y, int fcolor, int bcolor) { 
 	if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor)) { 
//		delay(10); 
		putpixel(x, y, fcolor); 
		boundary_fill8(x + 1, y, fcolor, bcolor); 
		boundary_fill8(x , y+1, fcolor, bcolor); 
		boundary_fill8(x+1, y + 1, fcolor, bcolor); 
		boundary_fill8(x-1, y - 1, fcolor, bcolor); 
		boundary_fill8(x-1, y, fcolor, bcolor); 
		boundary_fill8(x , y-1, fcolor, bcolor); 
		boundary_fill8(x-1, y + 1, fcolor, bcolor); 
		boundary_fill8(x+1, y - 1, fcolor, bcolor); 
	} 
} 

int main() { 
	int gd=DETECT,gm;
	initgraph(&gd,&gm,""); 
	rectangle(50,50,100,100); 
	flood4(51,51,9,0); 
	rectangle(150,50,200,100);
	flood8(151,51,12,0);
	
	circle(100,200,25); 
	boundary_fill4(105,205,6,15);
	rectangle(200,200,250,250); 
	boundary_fill8(201,201,13,15);
	
	getch();
	closegraph();
	return 0;
} 
