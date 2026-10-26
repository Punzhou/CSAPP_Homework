#include <stdio.h>

int even_ones(unsigned x)
{
	x = x ^ (x >> 16); 
	x = x ^ (x >> 8); 
	x = x ^ (x >> 4); 
	x = x ^ (x >> 2); 
	x = x ^ (x >> 1);
	
	return !x; 
} 

int main(void)
{
	printf("%d",even_ones(200));
	
	return 0;
}
