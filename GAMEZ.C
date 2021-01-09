/*
					AUTHOR=SMIT PRAJAPATI
					DOC = 10 JAN 2021
					OBJECTIVE = CREATE CANDY GAME FOR SNAKES AND HACKERS HACKTHONS
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int candyX=40,candyY=5,boxX=40,boxY=22;
	int score=0,lives=3,d;
	char ch;
	textbackground(BLUE);
	start:
	clrscr();
	gotoxy(40,5);
	printf("SCORE:%d",score);
	gotoxy(40,6);
	printf("LIVES:%d",lives);
	gotoxy(candyX,candyY);
	printf("0");
	gotoxy(boxX,boxY);
	printf("#");
	gotoxy(boxX+7,boxY);
	printf("#");
	gotoxy(boxX,boxY+1);
	printf("########");
	if(kbhit()){
			ch=getch();
			switch(ch){
				case 'a':boxX--;
					 break;
				case'd':boxX++;
					break;
				case'x':exit(0);
			}
		}

	candyY++;
	if(candyY==23){
		d=candyX-boxX;

		if(d==0 || d==-1 || d==1){
		  score++;
		  }else{
			lives--;
			if(lives==0){

					clrscr();
					gotoxy(40,13);
					printf("GAME OVER");
					getch();
					exit(0);
			}
		  }

		  candyY=2;
		  candyX=rand()%20+1;
		  //sound(20);
		  //delay(2000);
		  //nosound();
	}
	delay(200);
	goto start;

}