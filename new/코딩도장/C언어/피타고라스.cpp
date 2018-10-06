#include<stdio.h>

int main()
{
	int i,j,k;
	int r1, r2, r3;
	
	for(i=1; i<10; i++)
	{
		r1 = i * i;
		//printf("i * i =  %d \n", r1);
		for(j=1; j<i; j++)
		{
			r2 = j * j;
			//printf("j * j = %d \n", r2);
			for(k=1; k<j; k++)
			{
				r3 = k * k;
				
				if(r1==r2+r3)
				{
					printf("a =%d b =%d c = %d a2 = %d b2 = %d c2= %d \n", k, j, i, r3, r2, r1);
				}
			}
		}
	}
}
