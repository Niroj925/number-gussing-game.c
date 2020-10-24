#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p1,p2,p1num,p2num,total=0,sum=0;
	printf("\t----------Welcome to Number Guess Game------------\n");
	printf("\t___________________________________________________\n");
	int a,b;
	char ch;
	do{
	printf("\t\tChoose level: \n\t\tenter 'e' for easy.\n\t\tenter 'm' for medium.\n\t\tenter 'h' for hard.\n\n");
		printf("\t\tSelect level:");
	scanf("%s",&ch);
	if(ch=='e'||ch=='E')
	{
		a=4;
		b=15;
	}
	else if(ch=='m'||ch=='M')
	{
		a=5;
		b=25;
	}
	else if(ch=='h'||ch=='H')
	{
		a=5;
		b=50;
	}
	else
	{
		printf("\t\tplease enter 'e' for easy 'm' for medium and 'h' for hard level.\n");
	}
	}while(ch!='e'&&ch!='m'&&ch!='h');
		do{
		p1num=(rand()%a)+1;
		p2num=(rand()%a)+1;
	     printf("\t\tenter guess number between 1 and %d.\n\n",a);
		printf("\t\tenter player1 guess no:");
     	scanf("%d",&p1);
     	if(p1num==p1)
		 {
		 printf("\t\tplayer1 guess is MACHED.....\n");	
		 }
		 else
		 {
		 	printf("\t\tplayer1 guess isn't Mached....Try Again..Please\n");
		 }
     	printf("\t\tActual number=%d\n",p1num);
     	printf("\t\tenter player2 guess no:");
     	scanf("%d",&p2);
     	if(p2num==p2)
		 	 {
		 printf("\t\tplayer2 guess is MACHED.....\n");	
		 }
		 else
		 {
		 	printf("\t\tplayer2 guess isn't Mached....Try Again..Please\n");
		 }
     	printf("\t\tActual number=%d\n",p2num);
     	if(p1==p1num)
     	{
     		total=total+p1num;
		 }
		 if(p2==p2num)
		 {
		 	sum=sum+p2num;
		 }	 
   	printf(" \t\t\t____________________\n");
	printf("\t\t\t|____Score Table_____|\n");
	printf("\t\t\t|player1  | player2  |\n");
	printf("\t\t\t____________________\n");
	printf("\t\t\t|Score: %d|Score: %d |\n",total,sum);
	printf("\t\t\t____________________\n\n\n");
	}while(sum<b&&total<b);
    if(total>=b)
    {
    	printf("\t....>>>...CONGRATULATION...<<<<....Player1 won the Game......!!!\n");
	}
	if(sum>=b)
	{
    	printf("\t....>>>...CONGRATULATION...<<<<....Player2 won the Game......!!!\n");
	}
	return 0;
}
