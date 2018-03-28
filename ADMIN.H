#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>

 admin()
 {
       int i,j;
       char pass[6],adm[6]="abcde";
     // adm[6]="abcde";
		textcolor(BLUE);
		for(i=1;i<50;i++)
		{
		    for(j=1;j<=80;j++)
		    {
		       gotoxy(j,i);
		       cprintf("%c",205);
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
			cprintf("LIBRARY MANAGMENT SYSTEM \n");
			gotoxy(22,10);
			cprintf(" ADMIN LOGIN");
			textcolor(RED+BLINK);
			gotoxy(22,12);
			cprintf("2.PLEASE ENTER THE PASSWORD...\n");
			textcolor(BLUE);
			gotoxy(22,13);
			scanf("%s",pass);
			if(strcmp(pass,adm)==0)
			   {
			    gotoxy(24,15);
			     printf("PASSWORD MATCHED");
			     delay(1000);
			     colib();
			   }
			else
			{
			gotoxy(24,15);
			 printf("PASSWORD DICLINED");
			 exit();
			}
 getch();
 return 0;
}
/**************************************************************************/

colib()
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
		cprintf("LIBRARY MANAGMENT SYSTEM \n");
		gotoxy(22,10);
		cprintf(" HI ADMIN,");
		textcolor(RED);
		gotoxy(22,12);
		cprintf("1. ADD BOOKS");
		gotoxy(22,13);
		cprintf("2. REMOVE BOOK");
		gotoxy(22,14);
		cprintf("3. CHANGE PASSWORD");
		textcolor(WHITE);
		gotoxy(22,17);
		cprintf("Please enter your choice....");
		scanf("%d",&a);
		switch(a)
		{
		case 1:
		{
		// addbook();
		 break;
		}
		case 2:
		{
		// removebook();
		 break;
		}
		case 3:
		{
		      /*	int i,j,a;
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
			cprintf("LIBRARY MANAGMENT SYSTEM \n");
			gotoxy(22,12);
			cprintf(" ADMIN LOGIN");
			gotoxy(22,15);
			cprintf("please enter the new password");

			gotoxy(22,16);
			gets(passworfd[]);
			textcolor(BLUE);
			gotoxy(22,17);
			cprintf("Please enter your choice....");

	       *///yaha prr password data file include karani hai
		break;
		}
		}

return 0;
}

/***************************************************************************/

