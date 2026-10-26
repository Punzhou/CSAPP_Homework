#include <stdio.h>

int lower_bits(int x, int n)
{
	int shift = sizeof(int) << 3;
	
	unsigned xright = x << (shift - n);
	
	xright = xright >> (shift - n);
	
	return xright;

} 


int main(void)
{
	printf("0x%.2x", lower_bits(0x78ABCDEF, 32));
	
	return 0;
}
