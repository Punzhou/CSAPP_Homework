#include <stdio.h>

int fits_bits(int x, int n)
{
	int shifted = x >> (n - 1);
	
	return !shifted | !(shifted + 1);
	 
}

int main(void)
{
	printf("%d", fits_bits(5, 4));
	
	return 0;
}
