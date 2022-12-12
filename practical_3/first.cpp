#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
float x,y,x1,y1,x2,y2,dx,dy,length;
int i, gd=DETECT, gm;
/* Read two end points of line */
cout<<"Enter the value of x1 :\t";
cin>>x1;
cout<<"Enter the value of y1 :\t";
cin>>y1;
cout<<"Enter the value of x2 :\t";
cin>>x2;
cout<<"Enter the value of y2 :\t";
cin>>y2;

initgraph(&gd,&gm,"c:/tc/bgi");
dx=abs(x2-x1);
dy=abs(y2-y1);
if (dx >= dy)
{
length = dx;
}
else
{
length = dy;
}
dx = (x2-x1)/length;
dy = (y2-y1)/length;
x = x1 + 0.5; /* Factor 0.5 is added to round the values */
y = y1 + 0.5; /* Factor 0.5 is added to round the values */


i = 1; /* Initialize loop counter */
while(i <= length)
{
putpixel(x,y,15);
x = x + dx;
y = y + dy;
i = i + 1;
delay(100);
}
getch();
closegraph();
}
