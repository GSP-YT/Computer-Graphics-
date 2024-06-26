#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "");

    // Creation of man object using circle and line
    setcolor(7);
    setfillstyle(SOLID_FILL, 10);
    circle(50, 50, 30); // drawing head
    floodfill(52, 52, 7);
    
    setcolor(13);
    line(50, 80, 50, 200); // drawing body
    line(50, 110, 20, 140); // left hand
    line(50, 110, 80, 140); // right hand
    line(50, 200, 20, 230); // left leg
    line(50, 200, 80, 230); // right leg

    // For loop for moving man
    for (i = 50; i <= getmaxx(); i++) {
        setcolor(7);
        setfillstyle(SOLID_FILL, 10);
        circle(i, 50, 30); // drawing head
        floodfill(i + 2, 52, 7);

        setcolor(13);
        line(i, 80, i, 200); // drawing body
        line(i, 110, i - 30, 140); // left hand
        line(i, 110, i + 30, 140); // right hand
        line(i, 200, i - 30, 230); // left leg
        line(i, 200, i + 30, 230); // right leg
        
        delay(10);
        cleardevice();
    }

    // Doing simple animation using translation
    for (i = 50; i <= getmaxx() / 2; i++) {
        setcolor(7);
        setfillstyle(SOLID_FILL, 10);
        circle(i, 50, 30); // drawing head
        floodfill(i + 2, 52, 7);

        setcolor(13);
        line(i, 80, i, 200); // drawing body
        line(i, 110, i - 30, 140); // left hand
        line(i, 110, i + 30, 140); // right hand
        line(i, 200, i - 30, 230); // left leg
        line(i, 200, i + 30, 230); // right leg

        delay(10);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}

