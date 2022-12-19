#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT,gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");

int x=getmaxx();
int y=getmaxy();
circle(x/2, y/2, 50);
line(x/2-100,y/2,x/2+100,y/2);
//triangle
line(x/2,y/2-100,x/2-80,y/2+50);
line(x/2,y/2-100,x/2+80,y/2+50);
line(x/2-80,y/2+50,x/2+80,y/2+50);
//

rectangle(x/2-80,y/2+50,x/2+80,y/2-50);
ellipse(x/2,y/2,0,360,40,35);
	     ellipse(x/2,y/2+50,0,-180,50,59);

outtextxy(100 + 100, 200 + 325, "woo");
getch();
closegraph();
return 0;
}
