#include<graphics.h>
#include<conio.h>


void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\bgi");
int a=getmaxx();
int b=getmaxy();
line(a/2,0,a/2,b);
line(0,b/2,a,b/2);
circle(a/4,b/4,65);
rectangle(a/2+a/4-50,b/2-b/4-50,a/2+a/4+100,b/2-b/4+50);
outtextxy(10,10+10,"lol");
ellipse(a/4,b/2+b/4,0,360,100,50);
ellipse(a/2+a/4,b/2+b/4+10,0,170,70,70);


getch();
closegraph();
}

