#include<stdio.h>  
#include<bits/stdc++.h>

using namespace std;

void drawline(int x0, int y0, int x1, int y1)  
{  
    int dx, dy, p, x, y;  
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
    while(x<x1)  
    {  
        if(p>=0)  
        {  
            cout<<x<<" "<<y<<endl;
            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            cout<<x<<" "<<y<<endl;
            p=p+2*dy;}  
            x=x+1;  
        }  
}  

int main()  
{  
    int x0,y0,x1,y1;
    printf("Enter co-ordinates of first point: ");  
    scanf("%d%d", &x0, &y0);  
    printf("Enter co-ordinates of second point: ");  
    scanf("%d%d", &x1, &y1);  
    drawline(x0, y0, x1, y1);  
    return 0;  
}  