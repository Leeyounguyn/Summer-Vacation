#include <stdio.h>

#define NUM 20

int main(void)
{
    int num=10, j, boolean;
	
	while(1)
	{
		boolean = 0;         
		
		for(j=2; j<=NUM; j++) //1로 는 어떤수도나누어 떨어지기떄문에 2이상 
		{
			if(num%j!=0)
			{
				boolean =1;
				break;        
			}
		}
		
		if(boolean == 0)
		{
			printf("%d", num);
			break;
		}
		
		num++;
	}
}
