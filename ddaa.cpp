#include<stdio.h>
#include<graphics.h>
#include<math.h>

float round(float a) {
    return a + 0.5;
}

int main() {
    int gd = DETECT, gm, x1, y1, x2, y2, steps, k;
    float xincr, yincr, x, y, dx, dy;

    printf("Enter x1, y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter x2, y2: ");
    scanf("%d%d", &x2, &y2);

    initgraph(&gd, &gm,(char*)"");

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    xincr = dx / steps;
    yincr = dy / steps;
    x = x1;
    y = y1;

    for (k = 1; k <= steps; k++) {
        delay(10);
        x += xincr;
        y += yincr;
        putpixel(round(x), round(y), WHITE);
    }

    outtextxy(200, 20, (char*)"DDA Algorithm");
    outtextxy(x1 + 10, y1 - 10, (char*)"Start point");
    outtextxy(x2, y2 - 20, (char*)"End point");

    getch();
    closegraph();
    
    return 0;
}

