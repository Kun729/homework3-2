#include<stdio.h>
#include<stdlib.h>

int power(int n, int p);

int main(void)
{
	int a, b;

	printf("��J�Ʀr:");
	scanf_s("%d", &a);
	printf("��J����:");
	scanf_s("%d", &b);
	printf("%d^%d = %d", a, b, power(a, b));
}
int power(int n, int p)
{
	if (p==1)
	{
		return n;
	}
	else
	{
		int ans = n;
		for (int i = 1; i <= p-1; i++)
		{
			ans = ans * n;
		}
		return ans;
	}
}