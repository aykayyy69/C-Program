#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT, gm;
    
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    circle(300, 200, 150);
    setcolor(WHITE);

    getch();
    closegraph();
}
