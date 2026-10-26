#include <stdio.h>

typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum)
{
	return (int)(word << (3 - bytenum) << 3) >> 24; 
}

int main(void)
{
	printf("0x%.2x",xbyte(0x12345678, 0));
	
	return 0;
}
