#include<stdio.h>
void bubble_sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		j=i;
		while(a[j]<a[j-i]&& j>0)
		{
			t=a[j];
			a[j]=a[j-i];
			a[j-i]=t;
			j--;
		}
	}
}
int main()
{
	int i,n,a[100];
	printf("enter the no.of ele:");
	scanf("%d",&n);
	printf("enter array ele");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("the sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
