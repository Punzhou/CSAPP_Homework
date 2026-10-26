#include <stdio.h>

int any_even_one(unsigned x)
{
	return !!(x & 0x55555555);
}

int main(void)
{
	printf("%d",any_even_one(0x00000000));
	return 0;
}
