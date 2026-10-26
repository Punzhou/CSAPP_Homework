#include <stdio.h>

int leftmost_one(unsigned x)
{
	x |= (x >> 1);
	x |= (x >> 2);
	x |= (x >> 4);
	x |= (x >> 8);
	x |= (x >> 16);
	return x - (x >> 1);
		
} 

int main(void)
{
	printf("%d", leftmost_one(100));
	
	return 0;
}
