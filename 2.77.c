#include <stdio.h>

int divide_power2(int x, int k)
{
	int sign = x >> 31;
	int bias = sign & ((1 << k) - 1);
	return (x + bias) >> k;
}

int main(void)
{
	printf("%d", divide_power2(-3, 1));
	
	return 0;
}
