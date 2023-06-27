#include <iostream>
#include <conio.h>
#include <graphics.h>

int main(){
    int gd=DETECT,gm;
    initgraph(&gd, &gm, NULL);
    int x,y;
    x=getmaxx();
    y=getmaxy();
    line (0,0,x,0);
    line (0,y/4,x,y/4); 
    line (0,y/2,x,y/2);
    line (0,3*y/4,x,3*y/4);
    line (0,y,x,y); 
    line (0,0,0,y);
    line (x/4,0,x/4,y); 
    line (x/2,0,x/2,y);
    line (3*x/4,0,3*x/4,y);
    line (0,0,x,y); 
    line (x,0,0,y);
    line (0,y/2,x/2,0); 
    line (x/2,0,x,y/2);
    line (0,y/2,x/2,y);
    line (x/2,y,x,y/2);
    getch();
    closegraph();
    return 0;
}