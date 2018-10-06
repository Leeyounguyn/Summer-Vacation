#include<stdio.h>

int main()
{
	int d = 91;
	int d_sum =0;
	int r_sum;
	
	r_sum = d;
	
	while(d>0)
	{
		d_sum +=d%10;
		d = d/10;
	} 
	
	r_sum = r_sum + d_sum;
	
	printf(" %d ", r_sum);
}
