#include <stdio.h>

int mul_5div_8(int x)
{
	int q = x >> 3;
	int r = x & 7;
	
	int bias = (x >> 31) & 7;
	int high_part = (q << 2) + q;
	int low_part = (r + bias + (r << 2)) >> 3;
	
	return high_part + low_part;
	 
} 

int main(void)
{
	printf("%d", mul_5div_8(-7));
	
	return 0;
}
