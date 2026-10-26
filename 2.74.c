#include <stdio.h>

int tsub_ovf(int x, int y)
{
	int d = x - y;
	int w = sizeof(int) << 3;
	
	int x_sign = x >> (w - 1);
	int y_sign = y >> (w - 1);
	int d_sign = d >> (w - 1);
	
	return ((x_sign ^ y_sign) & (x_sign ^ d_sign)) & 1;
	
} 

int main(void)
{
	printf("%d", tsub_ovf(2, 3));
	
	return 0;
}
