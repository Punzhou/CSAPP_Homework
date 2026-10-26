#include <stdio.h>

int sra(int x, int k)
{
	/*Perform shift logically*/
	int xsrl = (unsigned)x >> k;
	
	int w = sizeof(int) << 3;
	
	int mask = -!!(x & (1 << (w - 1)));
	
	int high_bits = (~0 << (w - 1 - k)) << 1;
	
	return xsrl | (mask & high_bits);
}

unsigned srl(unsigned x, int k)
{
	unsigned xsra = (int)x >> k;
	
	int w = sizeof(int) << 3;
	
	unsigned mask = -!!(x & (1 << (w -1)));
	
	unsigned high_bits = (~0 << (w - 1 - k)) << 1;
	
	return xsra & ~(mask & high_bits);
}

int main(void)
{
	printf("0x00%.2x",sra(0x02345678, 2));
	return 0;
}
