#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    float x1,x2,y1,y2,a,b,x,y,steps,dx,dy;
    cout<<"enter (x1,y1) and (x2,y2) : "<<endl;
    cin>>x1>>y1>>x2>>y2;
    a=x2-x1;
    b=y2-y1;
    if (abs (a)>=abs (b)){
        steps=abs(a);
    }
    else{
        steps=abs(b);
    }
    dx=a/steps;
    dy=b/steps; 
    putpixel(x1,y1,3);
    x=x1;
    y=y1;
    for(int i=0;i<=steps; i++){
        x=x+dx; 
        y=y+dy; 
        putpixel(x,y,3);
    } 
    getch();
    closegraph();
    return 0;
}