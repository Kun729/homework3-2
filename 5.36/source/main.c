#include <stdio.h>
#include<stdlib.h>

void hanoi(int n, char A, char B, char C) 
{
	if (n == 1) 
	{
		printf(" %c ¡÷ %c\n", A, C);
	}
	else 
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}

int main(void)
{
	int n;
	printf("½Ð¿é¤J½L¼Æ¡G");
	scanf_s("%d", &n);
	hanoi(n, '1', '2', '3');
	return 0;
}