#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
long amt=1000,dep,wit;
int choice,k,z,i=0;
char ch,pinn[4];
char transaction='Y';
char end;

int call(void)
{
	for(z=0;z<5;z++)
	{
	printf(". ");
	delay(250);
	}
	return 0;
}


void main()
{
clrscr();
while(strcmp(pinn,"1111")!=0)
{
printf("\n\n\n\n\n\n\n\tenter your secret number:\t");
while(1)
{
	ch=getch();
	if(ch==ENTER)
	{
		pinn[i]='\0';
		break;
	}
	else if(ch==BKSP)
	{
		if(i>0)
		{
		i--;
	printf("\b \b");
		}
	}
	else if(ch==TAB||ch==SPACE)
	{
	continue;
	}
	else
	{
	pinn[i]=ch;
	i++;
	printf("*");
	}
}
printf("\n\n\n\tconnecting to server");
call();
printf("\n\n\n\tplease wait your transaction is processing");
call();
if(strcmp(pinn,"1111")!=0)
clrscr();
printf("\n\n\n\n\n\n\n\n\t\t\tplease enter valid password\n");
delay(150);
clrscr();
}
do
{
clrscr();
printf("\n\n\n\n\n\n\n\n\t\t************* welcome to atm service *****************\n");
printf("\t\t1. check balance\n\t\t2. withdraw\n\t\t3. deposit cash\n\t\t4. quit\n");
printf("\t\t******************************************************\n");
printf("\n\t\tenter your choice\n\t\t");
scanf("%d",&choice);
switch (choice)
{
case 1: clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tprocessing your request\n\t\t\tplease wait");
	call();
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\tyour balance is rs %lu",amt);
	break;
case 2: clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tprocessing your request\n\t\t\tplease wait");
	call();
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tenter amount to withdraw:\n\t\t\t\t");
	scanf("%lu",&wit);
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tprocessing your request\n\t\t\tplease wait");
	call();
	if(wit%100!=0)
	{
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\tplease enter the amount in multiples of 100");
	}
	else if(wit>(amt-500))
	{
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tinsuffecient balance\n\n\n\n");
	}
	else
	{
	amt=amt-wit;
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tPLEASE COLLECT CASH");
	printf("\n\t\t\tyour current balance is %lu",amt);
	}
	break;
case 3: clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tprocessing your request\n\t\t\tplease wait");
	call();
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\tenter amount to deposit: \n\t\t\t\t\t");
	scanf("%lu",&dep);
	amt=amt+dep;
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tprocessing your request\n\t\t\tplease wait");
	call();
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\tyour balance is %lu",amt);
	break;
case 4: clrscr();
	goto end;
	//printf("\nthank you for using our atm service");
	//break;
default : 
		printf("\n\n\n\n\n\n\n\n\t\t\tprocessing your request\n\t\t\tplease wait");
		call();
	  clrscr();
	  printf("\n\n\n\n\n\n\n\n\t\t\tinvalid choice");
}
printf("\n\n\n\t\tDO YOU WISH TO HAVE ANOTHER TRANSACTION (Y/N):\n\t\t\t\t");
fflush(stdin);
scanf("%c",&transaction);
if(transaction=='n'||transaction=='N')
k=1;
}
while(!k);
end:
clrscr();
printf("\n\n\n\n\n\n\n\n\t\t\tprocessing your request\n\t\t\tplease wait");
call();
clrscr();
printf("\n\n\n\n\n\n\n\n\n\t\t\tTHANK YOU FOR USING OUR ATM SERVICE");
getch();
}