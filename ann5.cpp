#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main() {
    int x = 0, gd = DETECT, gm;
    int points[] = {0, 220, 1600, 220, 1600, 900, 0, 900, 0, 220};
    float y = 0;

    initgraph(&gd, &gm, "");

	settextstyle(2, HORIZ_DIR, 10);
    setcolor(MAGENTA);
    outtextxy(200, 50, "Hi");
    delay(1000);
    cleardevice();
    
    outtextxy(10, 50, "GET READY");
    outtextxy(10, 150, "FOR ANIMATION");
    delay(1000);
    cleardevice();

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillpoly(5, points);

    setcolor(WHITE);
    circle(100, 100, 25);
    line(100, 125, 100, 185);
    line(100, 135, 125, 170);
    line(100, 135, 75, 170);
    line(100, 185, 125, 220);
    line(100, 185, 75, 220);
    delay(1000);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(135 + x, 210 - y, 10, 10);

    for (x = 0; x < 50; x++) {
        setcolor(WHITE);
        line(100, 185, 75 + x, 220 - y);
        delay(100);
        setcolor(BLACK);
        line(100, 185, 75 + x, 220 - y);
        y = y + 0.25;
    }

    setcolor(WHITE);
    line(100, 185, 125, 220);
    line(100, 185, 75, 220);

    for (x = 0, y = 0; y < 100; x++) {
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        fillellipse(135 + x, 210 - y, 10, 10);
        delay(10);

        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(135 + x, 210 - y, 10, 10);
        y = y + 0.5;
    }

    for (; x < 490; x++) {
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        fillellipse(135 + x, y, 10, 10);
        delay(10);

        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(135 + x, y, 10, 10);
        y = y + 0.25;
    }

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(135 + x, y, 10, 10);
    delay(20);
    cleardevice();

    setbkcolor(CYAN);
    settextstyle(3, HORIZ_DIR, 10);
    outtextxy(200, 80, "GOAL");

    getch();
    closegraph();
    return 0;
}
