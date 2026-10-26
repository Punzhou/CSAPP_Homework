#include <stdio.h>

unsigned unsigned_high_prod(unsigned x, unsigned y)
{
	unsigned x_msb = x >> 31;
	unsigned y_msb = y >> 31;
	
	int signed_high = signed_high_prod((int)x, (int)y);
	
	return (unsigned)signed_high + x_msb * y + y_msb * x;
}
