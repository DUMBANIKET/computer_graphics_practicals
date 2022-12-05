				   #include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\bgi");
int a=getmaxx();
int b=getmaxy();
line(a/2-50,b/2+b/3,a/2+50,b/2+b/3);
ellipse(a/2,b/2+59,180,360,70,100);
line(a/2-68,b/2+60,a/2+68,b/2+60);
ellipse(a/2-42,b/2+60,0,90,70,150);
circle(a/2-80,b/2-140,20);
ellipse(a/2-80,b/2-86,0,360,40,35);
ellipse(a/2-20,b/2-135,0,360,40,35);
ellipse(a/2-70,b/2-195,0,360,40,35);
ellipse(a/2-140,b/2-140,0,360,40,35);


getch();
closegraph();
}

