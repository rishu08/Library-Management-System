#include<stdio.h>
#iclude<conio.h>
#include<graphics.h>
#include<string.h>

student()
{
	int i,j,a;
	clrscr();

	textcolor(LIGHTRED);
	for(i=1;i<50;i++)
	{
	    for(j=1;j<=80;j++)
	    {
	       gotoxy(j,i);
	       cprintf("%c",206);
	    }
	}
	for(i=7;i<20;i++)
	{
	  for(j=20;j<=60;j++)
	  {
	   gotoxy(j,i);
	   cprintf(" ");
	  }
	}
		gotoxy(27,8);
		textcolor(YELLOW);
		cprintf("LIBRARY MANAGMENT SYSTEM ");
		gotoxy(22,12);
		cprintf("STUDENT LOGIN");
		gotoxy(22,14);
		cprintf("1. ISSUE BOOK");
		gotoxy(22,15);
		cprintf("2. RETURN BOOK");
		gotoxy(23,17);
		cprintf("please enter your choice....");
		sanf("%d",&a);
		getch();


}