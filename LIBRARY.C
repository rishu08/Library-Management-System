 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include"admin.h"
 #include"student.h"

  void main()
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
		cprintf("1. ADMIN LOGIN");
		gotoxy(22,14);
		cprintf("2. STUDENT LOGIN");
		textcolor(WHITE);
		gotoxy(52,23);
		cprintf("Developed by:- RISHABH GUPTA");
		textcolor(BLUE);
		gotoxy(22,17);
		printf("Please enter your choice....");

		//YAHA PRR FIRST PAGE KHATAM HUA :-)
		scanf("%d",&a);
		switch(a)
		 {
		  case 1:
		    {
		      admin();
		      break;
		    }
		  case 2:
		    {
		     student();
		     break;
		    }
		 default:
		    printf("wrong no.");
		 }

  getch();

  }                    
