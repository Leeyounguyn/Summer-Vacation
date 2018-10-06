#include<Stdio.h>
int main()
{

	int i=0,sum=0;

	for(i=1;i<1000;i++)
	{
    	if(i%3==0||i%5==0)
    	{
    		printf("%d  ", i);
    		sum+=i;
		}
        	
	}

	printf("1000미만의 자연수에서 3,5의 배수의 총합은 : %d ",sum);

	return 0;
	
}
