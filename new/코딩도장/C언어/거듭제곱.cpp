#include<stdio.h>

int main()
{
	int i,j,k;
	int p1, p2, p3;
	int result;
	for(i=1; i<1000; i++)
	{
		p1 = i * i;
		for(j=1; j<i; j++)
		{
			p2 = j * j;
			//printf("j * j = %d \n", r2);
			for(k=1; k<j; k++)
			{
				p3 = k * k;
				
				if((p1 == p2+p3) && (i+j+k == 1000))
				{
					result = k * j * i;
					printf("a =%d b =%d c = %d a2 = %d b2 = %d c2= %d result = %d \n", k, j, i, p3, p2, p1, result);
					
				}
			}
		}
	}
}
