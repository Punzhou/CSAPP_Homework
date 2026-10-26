#include <stdio.h>

int expr_A(int x)
{
	return !~x;
}

int expr_B(int x)
{
	return !x;
}

int expr_C(int x)
{
	int shift = (sizeof(int) - 1) << 3;
	int xright = x >> shift;
	return !(~xright & 0xFF); 
}

int expr_D(int x)
{
	return !(x & 0xFF);
}

int main(void)
{
	printf("%d", expr_C(0xFF000000));
	
	return 0;
}
