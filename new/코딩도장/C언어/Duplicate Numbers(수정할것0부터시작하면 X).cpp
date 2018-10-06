#include<stdio.h>

int main()
{
	char num[20];
	char tmp[20] = {0, };
	
	int i,cnt=0 ,j = 0;
	int c[10]={0, };
	printf("Duplicate Numbers\n0~9까지의 문자로된 숫자를 입력받을때 이 입력값이 0~ 9까지의 숫자가 각각 한번씩만 사용된것인지를 확인함 :");
	scanf("%s", num); 
	
	while(num>0)
	{
		tmp[cnt] = num%10;
		num=num/10;
		cnt++;		
	}
	
	int arr[cnt];
	
	for(i=0; i<cnt; i++)
	{
		arr[i] = tmp[i];
	
		for(j=0; j<10; j++)
		{
			if(arr[i]==j)
			{
				c[j]++;
			}
		}
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	for(i=0; i<10; i++)
	{
		if(c[i] != 1)
		{
			printf("False");
			return 0;
		}	
	}
	
	printf("True\n");
	return 0;
	
}
