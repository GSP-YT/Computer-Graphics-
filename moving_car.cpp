#include<graphics.h>
void car(int x){
	line(50 + x,210,150 + x,210);
	line(20 + x,240,200 + x,240);
	
	line(20 + x,280,30 + x,280);
	line(190 + x,280,200 + x,280);
	line(70 + x,280,150 + x,280);
	
	line(50 + x,210,30 + x,240);
	line(150 + x,210,180 + x,240);
	
	line(20 + x,240,20 + x,280);
	line(200 + x,240,200 + x,280);
	
	circle(50 + x,280,18);
	circle(170 + x,280,18);
	
	arc(50 + x,280,0,180,20);
	arc(170 + x,280,0,180,20);
}
int main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"");
	
	for(int x = 0;; x++){
		x %= 420;
		
		setcolor(WHITE);
		//path
		line(0,297,640,297);
		car(x);
		
		delay(10);
		
		setcolor(BLACK);
		car(x);
	}
	
	getch();
	closegraph();
	return 0;
}
