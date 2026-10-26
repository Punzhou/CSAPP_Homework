#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%.2x", start[i]);
	}
	printf("\n");
}

void show_short(short x)
{
	show_bytes((byte_pointer)&x, sizeof(short));
}

void show_long(long x)
{
	show_bytes((byte_pointer)&x, sizeof(long));
}

void show_double(double x)
{
	show_bytes((byte_pointer)&x, sizeof(double));
}

void show_pointer(void *x)
{
	show_bytes((byte_pointer)x, sizeof(void*));
}

int main()
{
	short a = 5;
	show_short(a);
	
	long b = 900000;
	show_long(b);
	
	double c = 3.10;
	show_double(c);
	
	short *p = &a;
	show_pointer(p);
	
	return 0;
} 
