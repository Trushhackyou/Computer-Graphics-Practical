#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int dx, dy, x,y,p,x1,y1,x2,y2;
int gd=DETECT,gm;
printf("\n\n\tEnter the coordinates of first point: ");
scanf("%d%d",&x1,&y1);
printf("\n\n\tEnter the coordinates of second point:");
scanf("%d%d",&x2,&y2);
dx=(x2-x1);
dy=(y2-y1);
p= 2*(dy)-(dx);
x=x1;
y=y1;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
putpixel(x,y,3);
while(x<=x2)
{
if(p<0)
{
x=x+1;
y=y;
p=p+2*(dy);
}
else
{
x=x+1;
y=y+1;
p=p+2*(dy-dx);
}
putpixel(x,y,3);
}
getch();
}