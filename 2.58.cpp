#include <stdio.h>

int is_little_endian()
{
	int a = 0x78215869;
	unsigned char *start = (unsigned char *) &a;
	if (start[0] == 0x69) return 1;
	else return 0;
}

int main()
{
	if (is_little_endian())
	{
		printf("The machine is Little Endian.\n");
	} 
	else
	{
		printf("The machine is Bif Endian.\n");
	}
	
	return 0;
}
