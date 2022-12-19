#include<stdio.h>

#include <graphics.h> #include <dos.h>

#include <conio.h>

void main()

{

int gd=DETECT,gm;

initgraph(&gd, &gm, "C:\\TC\\BGI");

int x0=70, y0 = 50 , x1 = 120, y1 = 150 , dx,dy,p,x,y;

dx=x1-x0;

dy=y1-y0;

y=y0;

p = 2 *dy-dx;

while(x<x1)

{

if (p>=0)

{

putpixel(x,y,7);


y=y+1;
y=y0;

p=2*dy-dx;
 while(x<x1)

{ if (p>=0)

{

putpixel(x,y,7);

y=y+1;

p=p+2*dy-2*dx;

}

else{

putpixel(x,y,7);

p=p+2*dy; }

x=x+1;

}

getch();

}}}
