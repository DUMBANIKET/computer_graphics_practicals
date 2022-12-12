#include<iostream.h> 

#include<dos.h> 

#include<conio.h> 

#include<math.h> 

#include<graphics.h> 

void main() 

{ 

int gd=DETECT,gm; 

initgraph(&gd,&gm,"C:\\TC\\BGI"); 

int dx, dy, p, end; 

float x1, x2, y1, y2, x, y; 

x1=x2=y1=y2=x=y=p=end=dx=dy=0; 

cout<<"Enter the x1 value : "; 

cin>>x1; 

cout<<"Enter the y1 value : "; 

cin>>y1; 

cout<<"Enter the x2 value : "; 

cin>>x2; 

cout<<"Enter the y2 value : "; 

cin>>y2; 

dx = abs(x1 - x2); 

dy = abs(y1 - y2); 

p = 2 * dy - dx; 

if(x1 > x2) 

{ 

x = x2; 

y = y2; 

end = x1; 

} 

else 

{ 

x = x1; 

y = y1; 

end = x2; 

} 

putpixel(x, y, RED);  

while(x < end) 

{ 

x = x + 1; 

if(p < 0) 

{ 

p = p + 2 * dy; 

} 

else 

{ 

y = y + 1; 

p = p + 2 * (dy - dx); 

} 

putpixel(x,y,RED); 

} 

getch(); 

}
