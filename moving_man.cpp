#include<graphics.h>
#include<dos.h>
void draw(int x,int h,int l){
	
	//path
	line(0,300,640,300);

	//man
	circle(100 + x,200,20);
	line(100 + x,220,100 + x,270);
	line(100 + x,230,80 + x + l,250);
	line(100 + x,230,120 + x,250);
	line(100 + x,270,80 + x + h,300);
	line(100 + x,270,120 + x - h,300);
	
	//chhata
	ellipse(120 + x, 180, 0, 180, 80, 40);
	line(40 + x,180,200 + x,180);
	line(120 + x,180,120 + x,250);
}
int main(){
	int gd = DETECT,gm,h = 0,l = 0;
	initgraph(&gd,&gm,"");
	bool flag = true;
	
	for(int x = 0; ; x++,h++){
		x %= 400;
		if(h == 40){
			h = 0;
			flag = !flag;
		}
		if(flag){
			l = h;
		}else {
			l = -h;
			l += 40; 
		}
		
		setcolor(WHITE);
		draw(x,h,l);
		
		delay(50);
		
		setcolor(BLACK);
		draw(x,h,l);
	}
	
	getch();
	closegraph();
	return 0;
}
