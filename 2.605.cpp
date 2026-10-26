#include <stdio.h>

int get_msb(int x)
{
	int shift_val = (sizeof(int)-1) << 3;
	int xright = x >> shift_val;
	return xright & 0xFF;
}

int get_non_msb(int x)
{
	int t1 = !!(x >> 24);
	int t2 = !!(x >> 16);
	int t3 = !!(x >> 8);
	
	int s1 = t1;
	int s2 = t2 & !t1;
	int s3 = t3 & !t2;
	
	int shift = (s1 << 4) + (s1 << 3) + (s2 << 4) + (s3 << 3);
	
	int xright = x >> shift;
	return xright & 0xFF;
}

int main(void)
{
	get_msb(0x12345678);
	printf("%.2x",get_non_msb(0x00123456));
	
	return 0; 
}
