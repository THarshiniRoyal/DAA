#include<stdio.h>
int main()
{
	int a=10,b=20;
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d  %d", a,b);
}
