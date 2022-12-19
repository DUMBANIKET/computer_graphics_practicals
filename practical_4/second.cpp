#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

 

 


void main(){
float d;
int gd=DETECT,gm,x,y,r;
initgraph(&gd,&gm,"C:\\TC\\BGI");

 

 

cout<<"Enter the radius of a circle :";
cin>>r;

 

 


x = 0;
y = r;

 

 


d = (5/4) - r;
do
{ 
  putpixel(200+x,200+y,15);
  putpixel(200+y,200+x,13);
  putpixel(200+y,200-x,11);
  putpixel(200+x,200-y,9);
  putpixel(200-x,200-y,7);
  putpixel(200-y,200-x,5);
  putpixel(200-y,200+x,3);
  putpixel(200-x,200+y,1);

 

 

if (d < 0)
{
  d = d + 2*x + 3;
}
else
{
  d = d + 2*(x-y) + 5;
  y = y - 1;
}
x = x + 1;
delay(10); 
} while(x < y);

 

 

getch();
closegraph();
}
