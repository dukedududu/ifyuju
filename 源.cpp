#include <stdio.h>
int main()
{
	float a, b;
	scanf_s("%f", &a);
	if (a < 1)
	{
		b = a;
		printf("%.2f", b);
	}
	else if (a < 10 && a >= 1)
	{
		b = 2 * a - 1;
		printf("%.2f", b);
	}
	else
	{
		b = 3 * a - 11;
		printf("%.2f", b);
	}
	return 0;
}