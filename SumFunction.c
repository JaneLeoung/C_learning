#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//sum function
Sum(x, y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = Sum(num1, num2);
	printf("sum is : %d\n", sum);
}