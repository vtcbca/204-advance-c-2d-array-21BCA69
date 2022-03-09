/*Write a program to enter 5 string and print vowel and
   also peint number vowels*/

#include<stdio.h>
#include<conio.h>
 void main()
{
	char a[5][10];
	int i,j,l=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter string %d:",i+1);
		flushall();
		gets(a[i]);
	}
	clrscr();
	printf("\nPrint string:");
	for(i=0;i<5;i++)
		printf("\nString is %d: %s",i+1,a[i]);
	printf("\n-------------------------------------");
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		{
		  if(a[i][j]=='A'||a[i][j]=='E'||a[i][j]=='I'||a[i][j]=='O'||a[i][j]=='U'||
		  a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
		    {
			l=l+1;
			printf("\n%c",a[i][j]);
		    }
		}
	}
	getch();
}

