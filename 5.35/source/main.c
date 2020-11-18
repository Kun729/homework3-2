#include<stdio.h>
#include<stdlib.h>

unsigned long long int F(int nth);

int main(void)
{
	int n,i;
	printf("輸入項數:");
	scanf_s("%d", &n);
	printf("第%d項為%d", n, F(n));
}
unsigned long long int F(int nth)
{
		if (nth == 1)
			return 0;
		if (nth == 2)
			return 1;
		if (nth >= 3)
			return F(nth - 1) + F(nth - 2);
}
