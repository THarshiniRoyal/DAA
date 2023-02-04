#include<stdio.h>

void main()
{
	int i,j,c=1,blk,row;
	printf("enter the no.of rows in pascal triangle:");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(blk=1;blk<row-i;blk++)
			printf(" ");
			for(j=0;j<=i;j++)
			{
				if(j==0||i==0)
				c=1;
				else
					c=c*(i-j+1)/j;
					printf("% 4d",c);
				}
				printf("\n");
			}
}
