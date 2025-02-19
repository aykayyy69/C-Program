#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT, gm;
    
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    line(200, 100, 10, 20);
    line(10, 20, 50, 60);
    line(50, 60, 200, 100);

    setcolor(WHITE);
    getch();
    closegraph();
}
