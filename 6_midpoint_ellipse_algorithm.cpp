#include <iostream> 
#include <conio.h>
#include <math.h>
#include <graphics.h>

using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd, &gm, NULL); 
    float xc,yc,rx,ry,dx,dy,x,y,p1,p2;
    cout<<"enter ellipse center: "<<endl;
    cin>>xc>>yc;
    cout<<"enter radii: "<<endl;
    cin>>rx>>ry;
    x=0;
    y=ry; 
    p1=(ry*ry)-(rx*rx*ry) + ((1/4)*(rx*rx)); 
    while(2*ry*ry*x<=2*rx*rx*y){
        putpixel(x+xc,y+yc,01);
        putpixel(x+xc,-y+yc, 02); 
        putpixel(-x+xc,y+yc,03);
        putpixel(-x+xc,-y+yc,04);
        if (p1<0){
            x=x+1;  
            y=y;
            p1=p1+2*ry*ry*x+ry*ry;
        } 
        if (p1>=0){
            x=x+1;
            y=y-1;
            p1=p1+2*ry*ry*x-2*rx*rx*y-ry*ry;
        }
    }
    p2=((ry*ry)*((x+0.5)*(x+0.5)))+((rx*rx)*((y-1)*(y-1)))-(rx*rx*ry*ry);
    while(y>=0){
        putpixel(x+xc,y+yc,01);
        putpixel(x+xc,-y+yc,02);
        putpixel(-x+xc,y+yc,03);
        putpixel(-x+xc,-y+yc,04);
        if(p2>0){
            x=x;
            y=y-1;
            p2=p2-2*rx*rx*y+rx*rx;
        }
        if(p2<=0){
            x=x+1;
            y=y-1;
            p2=p2+2*ry*ry*x-2*rx*rx*y+rx*rx;
        }
    }
    getch();
    closegraph();
    return 0;
}