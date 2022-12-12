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

outtextxy(100 + 100, 200 + 325, "woo");
getch();
closegraph();
return 0;
}
