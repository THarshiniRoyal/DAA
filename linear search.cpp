#include<stdio.h>
int main()
{
	int arr[100],search,c,n;
	printf("enter number of elements in array\n");
	scanf("%d",&n);
	printf("enter %d integer(s)\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&arr[c]);
	printf("enter a number to search\n");
	scanf("%d",&search);
	for (c=0;c<n;c++)
	{
		if(arr[c]==search)
		{
			printf("%d is present at loacation %d.\n",search,c+1);
			break;
		}
	}
	if(c==n)
	printf("%d is not present in the array.\n",search);
	return 0;
}
