#include<stdio.h>
#include<conio.h>
 void main()
{
	char s[3][10],m[10];
	int i,f=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\nEnter string s[%d]:",i);
		gets(s[i]);
	}
	clrscr();
	for(i=0;i<3;i++)
	 {
		printf("\n%s",s[i]);
	 }
	printf("\nEnter string which you want to search:");
	gets(m);
	for(i=0;i<3;i++)
	{
	  if (strcmp(s[i],m)==0)
	   {
		f=1;
		break;
	    }
	}
	if(f==0)
		printf("\nString is not available: ");
	else
		printf("\nString is available: ");
	getch();
}