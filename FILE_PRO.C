#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<io.h>
int main(){
	int i,test;
	char ch,FN[20];
	char s[]={"FILE / FOLDER PROTECTION SOFTWARE !"};
	start:
	clrscr();
	gotoxy(14,5);
	textcolor(2);
	cprintf("_______________________________________________");
	gotoxy(14,6);
	cprintf("_______________________________________________");
	gotoxy(14,10);
	cprintf("_______________________________________________");

	gotoxy(18,8);
	textcolor(10);
	for(i=0;s[i]!='\0';i++){
	_setcursortype(1);
	cprintf("%c",s[i]);
	delay(50);
	sound(1500);
	delay(50);
	nosound();
	}
	textcolor(2);
	gotoxy(22,12);
	cprintf("1 :HIDE A FILE / FOLDER ");
	gotoxy(22,14);
	cprintf("2 :SHOW A FILE / FOLDER ");
	gotoxy(22,16);
	cprintf("3 :HELP ");
	gotoxy(16,18);
	cprintf("ENTER YOUR CHOICE:- ");
	ch=getch();
	if(ch==27)
	exit(0);
	switch(ch)
	{
	case '1': clrscr();
		gotoxy(15,6);
		textcolor(2);
		cprintf("_______________________________________________");
		gotoxy(15,7);
		cprintf("_______________________________________________");
		gotoxy(15,12);
		cprintf("_______________________________________________");
		gotoxy(17,9);
		cprintf("Enter file / folder name with correct path !");
		gotoxy(17,11);
		cprintf("$: ");
		fflush(stdin);
		gets(FN);

		test=_chmod(FN,1,FA_SYSTEM | FA_HIDDEN | FA_RDONLY);
		if(test==-1){
		clrscr();
		gotoxy(19,9);
		sound(1000);
		delay(200);
		cprintf("Unable to hide file / folder !");
		}
		else
		{
		clrscr();
		gotoxy(19,9);
		cprintf("Operation executed successfully !");
		}
		nosound();

		break;
	case '2': clrscr();
		gotoxy(15,6);
		textcolor(2);
		cprintf("_______________________________________________");
		gotoxy(15,7);
		cprintf("_______________________________________________");
		gotoxy(15,12);
		cprintf("_______________________________________________");
		gotoxy(17,9);
		cprintf("Enter file / folder name with correct path !");
		gotoxy(17,11);
		cprintf("$: ");
		fflush(stdin);
		gets(FN);

		test=_chmod(FN,1,0);
		if(test==-1){
		clrscr();
		gotoxy(19,9);
		sound(1000);
		delay(200);
		cprintf("Unable to show file / folder !");
		}
		else
		{
		clrscr();
		gotoxy(19,9);
		cprintf("Operation executed successfully !");
		}
		nosound();

		break;
	case '3':
		clrscr();
		gotoxy(9,6);
		textcolor(2);
		cprintf("_______________________________________________");
		gotoxy(9,7);
		cprintf("_______________________________________________");
		gotoxy(9,16);
		cprintf("_______________________________________________");
		gotoxy(14,9);
		cprintf("ENTER FULL PATH OF FILE / FOLDER IN FOLLOWING FORMAT");
		gotoxy(16,11);
		cprintf("Example:- If your file / folder present on E Drive");
		gotoxy(24,13);
		cprintf("Then E:\\File Name or Folder name");
		gotoxy(12,15);
		cprintf("Note:-Providing the Extension of File is compulsory !");
		break;
	default:
		clrscr();
		sound(1000);
		delay(200);
		gotoxy(19,9);
		cprintf("PLEASE INPUT COREECT CHOICE !");
		nosound();
		break;
		}
		delay(2000);
		goto start;

	}
