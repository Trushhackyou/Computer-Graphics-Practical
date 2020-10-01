#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#define ROUND(a) ((int)(a+0.5))
#include<math.h>
void main(){ int gd=DETECT,gm,x1,y1,x2,y2;
void lineDDA(int xa, int ya, int xb, int yb);
printf("Enter first coordinate");scanf("%d%d",&x1,&y1);printf("Enter second coordinate"); scanf("%d%d",&x2,&y2); initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
lineDDA(x1,y1,x2,y2);
getch();

}

void lineDDA(int xa, int ya, int xb, int yb)
{
int dx= xb-xa, dy=yb-ya, steps, k;
float xIncrement, yIncrement, x=xa, y=ya;
if(abs(dx)>abs(dy))
steps=abs(dx);
else
steps=abs(dy);
xIncrement=dx/(float)steps;
yIncrement=dy/(float)steps;
putpixel(ROUND(x),ROUND(y),2);
for(k=0;k<steps;k++)
{
x+=xIncrement;
y+=yIncrement;
putpixel(ROUND(x),ROUND(y),2);
}
}