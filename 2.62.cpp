#include <stdio.h>

int int_shift_are_logical(void)
{
	return !!(~(~0 >> 1));
	/*0xFFFFFFFF to 0x7FFFFFFF or 0xFFFFFFFF*/
} 

int main(void)
{
	int_shift_are_logical();
}
