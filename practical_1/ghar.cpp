
#include  <graphics.h>
void main()
{
    int     driver = DETECT;
    int gm;

    initgraph(&driver,&gm,"C:\\TC\\bgi");

	line(40,170,270,170);
	line(40,170,155,50);
	line(155,50,270,170);

	line(40,370,270,370);
       line(40,170,40,370);

	line(270,170,270,370);
       //darwaja
       line(220,370,220,250);
       line(160,370,160,250);
       line(160,250,220,250);
       circle(170,330,5);

	//sidi
	line(80,370,100,390);
	line(230,370,250,390);
	line(100,390,250,390);
	line(100,390,120,410);
	line(250,390,270,410);
	line(120,410,270,410);
		      circle(155,125,30);

    getch();


}
