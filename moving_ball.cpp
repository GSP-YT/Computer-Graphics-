#include<graphics.h>
#include<dos.h>
void makedelay(){
	delay(1);
}
void draw(){
	for(int x = 30,y = 30;x < 400;x++){
		setcolor(WHITE);
		setfillstyle(1,GREEN);
		circle(x,y,20);
		fillellipse(x,y,20,20);
		
		makedelay();
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(x,y,20);
		fillellipse(x,y,20,20);
	}
	
	for(int x = 400,y = 30;y < 400;y++){
		setcolor(WHITE);
		setfillstyle(1,GREEN);
		circle(x,y,20);
		fillellipse(x,y,20,20);
		
		makedelay();
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(x,y,20);
		fillellipse(x,y,20,20);
	}
	
	for(int x = 400,y = 400;x > 30;x--){
		setcolor(WHITE);
		setfillstyle(1,GREEN);
		circle(x,y,20);
		fillellipse(x,y,20,20);
		
		makedelay();
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(x,y,20);
		fillellipse(x,y,20,20);
	}
	
	for(int x = 30,y = 400;y > 30;y--){
		setcolor(WHITE);
		setfillstyle(1,GREEN);
		circle(x,y,20);
		fillellipse(x,y,20,20);
		
		makedelay();
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(x,y,20);
		fillellipse(x,y,20,20);
	}
	
	for(int x = 30,y = 30;x < 400 && y < 400;x++,y++){
		setcolor(WHITE);
		setfillstyle(1,GREEN);
		circle(x,y,20);
		fillellipse(x,y,20,20);
		
		makedelay();
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(x,y,20);
		fillellipse(x,y,20,20);
	}
	
	for(int x = 30,y = 400;x < 400 && y > 30;x++,y--){
		setcolor(WHITE);
		setfillstyle(1,GREEN);
		circle(x,y,20);
		fillellipse(x,y,20,20);
		
		makedelay();
		
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		circle(x,y,20);
		fillellipse(x,y,20,20);
	}
}
int main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"");
	
	while(true){
		draw();
	}
	
	getch();
	closegraph();
	return 0;
}
