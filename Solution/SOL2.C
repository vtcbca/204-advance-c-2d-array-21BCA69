/* WAP to create to 3*3 Matrix & check it is diagonal are not
Program 2 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,f=0;
	clrscr();
	for(i=0;i<3;i++)//for a
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n---------------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d \t",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j&&a[i][j]!=0)
			{
				f=1;
				break;
			}
		}
	}
	if(f==1)
		printf("\n Matrix is not Diagonal");
	else
		printf("\n Matrix is Diagonal");
	getch();
}
