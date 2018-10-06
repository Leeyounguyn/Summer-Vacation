#include<stdio.h>
#include<string.h>

int main()
{
	char num[20];
	
	int i,cnt=0 ,j = 0;
	int c[10]={0, };
	printf("Duplicate Numbers\n0~9까지의 문자로된 숫자를 입력받을때 이 입력값이 0~ 9까지의 숫자가 각각 한번씩만 사용된것인지를 확인함 :");
	scanf("%s", num); 
	
	for(i=0; i<strlen(num); i++)
	{
		for(j=0; j<10; j++)
		{
		
			if(num[i]=='0'+j)
			{
				c[j]++;
			}
		}
	}
	
	
	for(i=0; i<10; i++)
	{
		if(c[i] != 1)
		{
			printf("false");
			return 0;
		}	
	}
	
	printf("true\n");
	return 0;
	
}
