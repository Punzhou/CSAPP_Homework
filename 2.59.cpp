#include <stdio.h>

int main()
{
	int x = 0x89ABCDEF;
	int y = 0x76543210;
	unsigned char *start1 = (unsigned char *)&x;
	unsigned char *start2 = (unsigned char *)&y;
	int len = sizeof(int);
	int i;
	
	printf("0x");
	for (i = len-1; i >= 1; i--)
	{
		printf("%.2x", start2[i]);	
	}	
	
	printf("%.2x", start1[0]);
	
	return 0;
} 
