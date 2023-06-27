#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL);
    int x,y,r,p,xc,yc;
    cout<<"enter the radius: ";
    cin>>r;
    cout<<"enter the center: ";
    cin>>xc>>yc;
    x=0;
    y=r;
    p=1-r;
    putpixel(x+xc,y+yc,05);
    putpixel(y+xc,x+yc,05);
    putpixel(-x+xc,-y+yc,05);
    putpixel(-y+xc,-x+yc,05);
    while(x<=y){
        if(p<0){
            x=x+1;
            y=y;
            p=p+2*x+1;
        }
        else{
            x=x+1;
            y=y-1;
            p=p+2*x+1-2*y;
        }
        putpixel(x+xc,y+yc,01);
        putpixel(y+xc,x+yc,02);
        putpixel(y+xc,-x+yc,03);
        putpixel(x+xc,-y+yc,04);
        putpixel(-x+xc,-y+yc,05);
        putpixel(-y+xc,-x+yc,06);
        putpixel(-y+xc,x+yc,07);
        putpixel(-x+xc,y+yc,8);
    }
    getch();
    closegraph();
    return 0;
}