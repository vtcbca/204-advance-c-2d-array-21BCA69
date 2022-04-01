/* Write a Menu Driven program to perform following task using different function category.
Date : 21/03/2022 */
#include<stdio.h>
#include<conio.h>
void primenum();
void palindrome(int);
int reverse();
int evennum();
int menu();
void main()
{
	int c,x,y,rev,a;
	char yn;
	clrscr();
	c=menu();
	do
	{
	switch(c)
	{
	case 1: primenum();
		break;

	case 2: printf("\n\t Enter Any Number :");
		scanf("%d",&x);
		palindrome(x);
		break;

	case 3: rev=reverse();
		printf("\n\t Reverse Number is : %d",rev);
		break;

	case 4: break;
	case 5: exit(0);
	default : printf("\n\n\t Invalid choice");
	}
	printf("\n\n\t Do You Want to Continue ? (Yes=Y/y,No=N/n):");
	flushall();
	scanf("%c",&yn);
	}while(yn=='Y'||yn=='y');
	getch();
}
int menu()
{
	int choice;
	printf("\n\t\t MENU");
	printf("\n -------------------------------\n\t 1.Prime Number \n\t 2.Palindrome Number \n\t 3.Reverse Number \n\t 4.Print Even Number \n\t 5.Exit \n -------------------------------\n");
	printf("\n\t Enter Your Choice :");
	scanf("%d",&choice);
	return choice;
}
void primenum()
{
	int x,i,c=0;
	printf("\n\t Enter Any Number :");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
	if(x%i==0)
	 {
	  c=1;
	  break;
	 }
	}
	if(c==1)
	{
		printf("\n\t %d is Not Prime Number ",x);
	}
	else
	{
		printf("\n\t %d is Prime Number ",x);
	}
}
void palindrome(int a)
{
	int i,j;
	j=a;
	while(a>0)
	{
		j=j*10+a%10;
		a=a/10;
	}
	if(j==i)
		printf("\n\t Number is Not Palindrome Number");
	else
		printf("\n\t Number is Palindrome Number");
}
int reverse()
{
	int a,b,rev=0;
	printf("\n\t Enter Any Number :");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		rev=rev*10+b;
		a=a/10;
	}
	return rev ;
}