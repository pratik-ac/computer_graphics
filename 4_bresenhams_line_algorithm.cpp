#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL);
    int x1,y1,x2,y2,dx,dy,k,lx,ly,x,y,p;
    cout<<"enter first endpoint: ";
    cin>>x1>>y1;
    cout<<"enter second endpoint: ";
    cin>>x2>>y2;
    dx= abs(x2-x1);
    dy= abs(y2-y1);
    if(x2>x1){
        lx=1;
    }
    else{
        lx=-1;
    }
    if(y2>y1){
        ly=1;
    }
    else{
        ly=-1;
    }
    putpixel(x1,y1,15);
    x=x1;
    y=y1;
    if(dx>dy){
        p= 2*dy-dx;
        for(k=0;k<dx;k++){
            if(p<0){
                x= x+lx;
                y= y;
                p=p+2*dy;
            }
            else{
                x= x+ lx;
                y= y+ ly;
                p= p+2*dy-2*dx;
            }
            putpixel(x,y,15);
        }
    }
    else{
        p= 2*dx-dy;
        for(k=0;k<dy;k++){
            if(p<0){
                x= x+lx;
                y= y+ly;
                p= p+2*dx;
            }
            else{
                x= x+ lx;
                y= y +ly;
                p=p+2*dx-2*dy;
            }
            putpixel(x,y,15);
        }
    }
    getch();
    closegraph();
    return 0;
}