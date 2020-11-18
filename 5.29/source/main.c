#include<stdio.h>
#include<stdlib.h>

int GCD(int a, int b);

int main(void)
{
	int n1, n2;

	scanf_s("%d%d", &n1, &n2);
	printf("%d",n1*n2/GCD(n1,n2));
}


int GCD(int a, int b) 
{
	if (a%b!=0)
	{
		return GCD(b, a%b);
	}
	else 
	{
		return (b);
	}
}
