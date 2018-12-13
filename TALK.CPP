#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdio.h>
#include<ctype.h>

void main()
 {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    setcolor(WHITE);
    for(int i=0;i<800;i++)
   {     settextstyle(DEFAULT_FONT,0,5);
  outtextxy(25,30,"I");
    circle(30+i,270,15);
    line(30+i,285,30+i,300);
    line(30+i,300,20+i,320);
    line(30+i,300,40+i,320);
    line(30+i,300,30+i,350);
    line(30+i,350,20+i,370);
    line(30+i,350,40+i,370);
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,0,5);
    outtextxy(20+i,210,"I");
    delay(10);
    setcolor(WHITE);
    cleardevice();
    line(0,340,900,340);
  }
    for(i=0;i<800;i++)
   {
    settextstyle(DEFAULT_FONT,0,5);
     outtextxy(25,30,"I  LOVE");
    circle(30+i,270,15);
    line(30+i,285,30+i,300);
    line(30+i,300,20+i,320);
    line(30+i,300,40+i,320);
    line(30+i,300,30+i,350);
    line(30+i,350,20+i,370);
    line(30+i,350,40+i,370);
   setcolor(RED);
  line(30+i,95,20+i,70);	 //heart
  line(30+i,95,45+i,70);
  line(20+i,70,10+i,90);
  line(45+i,70,55+i,90);
  line(10+i,90,29+i,140);
  line(55+i,90,29+i,140);
  setcolor(LIGHTRED);
    settextstyle(DEFAULT_FONT,0,5);
    outtextxy(5+i,210,"LOVE");
    delay(10);
    cleardevice();
    setcolor(WHITE);
    line(0,340,900,340);
  }
   for(i=0;i<800;i++)
   {setcolor(5);
    settextstyle(DEFAULT_FONT,0,5);
    outtextxy(25,30,"I  LOVE  YOU");
    setcolor(WHITE);
    circle(30+i,270,15);
    line(30+i,285,30+i,300);
    line(30+i,300,20+i,320);
    line(30+i,300,40+i,320);
    line(30+i,300,30+i,350);
    line(30+i,350,20+i,370);
    line(30+i,350,40+i,370);
    settextstyle(DEFAULT_FONT,0,5);
    setcolor(YELLOW);
    outtextxy(20+i,210,"YOU");
    delay(10);
    setcolor(WHITE);
    cleardevice();
    line(0,340,900,340);
  }

   circle(230,270,15);
    line(230,285,230,300);
    line(230,300,220,320);
    line(230,300,240,320);
    line(230,300,230,350);
    line(230,350,220,370);
    line(230,350,240,370);

   for(int j=0;j<500;j++)
   {
   circle(530-j,270,15);
    line(530-j,285,530-j,300);
    line(530-j,300,520-j,320);
    line(530-j,300,540-j,320);
    line(530-j,300,530-j,350);
    line(530-j,350,520-j,370);
    line(530-j,350,540-j,370);
    settextstyle(DEFAULT_FONT,0,5);
    outtextxy(530-j,210,"DO YOU ?");
    delay(10);
    cleardevice();
    line(0,340,900,340);
   }

    circle(350,270,15);
    line(350,285,350,300);
    line(350,300,340,320);
    line(350,300,360,320);
    line(350,300,350,350);
    line(350,350,360,370);
    line(350,350,340,370);
    for(i=0;i<30;i+=10)
  {

    setcolor(i+10);
    settextstyle(DEFAULT_FONT,0,4);
    outtextxy(20,40+i,"If 'Yes', Press Y");
  }
  getch();
  closegraph();
  char ch;
   while(!kbhit())
   {
    cin>>ch;
    ch=toupper(ch);
    if(ch=='Y')
    {
      clrscr();
      cout<<"\n\n\n\n\n";
      textcolor(RED+BLINK);
      cprintf("                       HOW MUCH ??    ");
     }
   }
 getch();
}