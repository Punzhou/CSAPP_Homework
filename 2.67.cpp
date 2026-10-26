#include <stdio.h>

int bad_int_size_is_32()
{
	int set_msb = 1 << 31;	
	
	int beyond_msb = (1 << 31) << 1;
	
	return set_msb && !beyond_msb;
	/*This code could run successfully on 32 bit of int class on the windows 64bit (amd64)*/ 
}

int bad_int_size_is_32_on_16()
{
	int set_msb = ((1 << 15) << 15) << 1;
	
	int beyond_msb =  ((1 << 15) << 15) << 2;
	
	return set_msb && !beyond_msb;
}

int main(void)
{
	printf("%d", bad_int_size_is_32()) ;
	
	return 0;
}
