#include<iostream.>
#include <conio.h>
#include <graphics.h>

using namespace std;
int main(){
    int gd=DETECT,gm, i, j, k;
    initgraph(&gd,&gm,NULL);
    float x,y,x1,x2,x3,y1,y2,y3; 
    float actpts[3][3], transmat[3][3], transpts[3][3]; 
    cout<<"Enter the initial points: "<<endl;
    for(int i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"actpts["<<i<<"]["<<j<<"] = ";
            cin>>actpts[i][j];
        }
    }
    x=getmaxx();
    y=getmaxy();
    setcolor(RED);
    line(x/2,0,x/2,y);
    line(0,y/2,x,y/2);
    cout<<"Enter the translation matrix: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"transmat["<<i<<"]["<<j<<"] = ";
            cin>>transmat[i][j];
        }
    }
    x1=actpts[0][0];
    x2=actpts[0][1];
    x3=actpts[0][2];
    y1=actpts[1][0];
    y2=actpts[1][1];
    y3=actpts[1][2];
    line(x/2+x1,y/2+y1,x/2+x2,y/2+y2);
    line(x/2+x1,y/2+y1,x/2+x3,y/2+y3);
    line(x/2+x2,y/2+y2,x/2+x3,y/2+y3);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            transpts[i][j]=0;
            for(k=0;k<3;k++){
                transpts[i][j]+=transmat[i][k]*actpts[k][j];
            }
        }
    }
    float x_1,x_2,x_3,y_1,y_2,y_3;
    x_1=transpts[0][0];
    x_2=transpts[0][1];
    x_3=transpts[0][2];
    y_1=transpts[1][0];
    y_2=transpts[1][1];
    y_3=transpts[1][2];
    setcolor(GREEN);
    line(x/2+x_1,y/2+y_1,x/2+x_2,y/2+y_2);
    line(x/2+x_1,y/2+y_1,x/2+x_3,y/2+y_3);
    line(x/2+x_2,y/2+y_2,x/2+x_3,y/2+y_3);
    getch();
    closegraph();
    return 0;
}