#include <stdio.h>

unsigned replace_byte(unsigned x, unsigned char b, int i)
{
	int shift = i << 3;
	
	/*push bit to byte*/
	unsigned mask = ~(0xFF << shift);
	
	/*0x00FF0000 to 0xFF00FFFF*/ 
	unsigned cleared_x = x & mask;
	
	/*0x12345678 & 0xFF00FFFF == 0x12005678*/
	unsigned b_shifted = b << shift;
	
	/*0xAB << shift == 0x00AB0000*/
	return cleared_x | b_shifted;
	
	/*0x12005678 | 0x00AB0000 == 0x12AB5678*/
} 

int main(void)
{
	unsigned b = replace_byte(0x12345678, 0xAB, 2);
	printf("0x%.2x", b);
	
	return 0;
}
