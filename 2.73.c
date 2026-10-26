#include <stdio.h>
#include <limits.h> 

int saturating_add(int x, int y)
{
	int sum = x + y;
	int w = sizeof(int) << 3;
	
	int x_sign = x >> (w - 1);
	int y_sign = y >> (w - 1);
	int sum_sign = sum >> (w - 1);
	
	int pos_ovf = ~x_sign & ~y_sign & sum_sign;
	int neg_ovf = x_sign & y_sign & ~sum_sign;
	
	int normal = ~pos_ovf & ~neg_ovf;
	
	return (pos_ovf & INT_MAX) | (neg_ovf & INT_MIN) | (normal & sum);
	
} 

int main(void)
{
	printf("%d",saturating_add(1, 2));
	
	return 0;
}
