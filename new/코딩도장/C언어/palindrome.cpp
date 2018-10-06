#include<stdio.h>

int main()
{
	int i;
	int j;
	int re = 0;
	int arr[6] = {0, };
	int cnt = 0;
	
	for(i=100; i<=999; i++)
	{
		for(j=100; j<=999; j++)
		{
			re = i * j;
			while(re > 0)
			{
				arr[cnt] = re%10;
				re = re /10;
				cnt++;
				printf("-----");
			}
		}
	}
	printf("---aaaaaaa---------");
	
}
