#include <stdio.h>

unsigned rotate_right(unsigned x, int n)
{
	unsigned xleft = x >> n;
	
	unsigned xright = x << (32-n);

	return xleft | xright;
}

int main(void)
{
	printf("0x%.2x", rotate_right(0x12345678, 0));
	
	return 0;
}

