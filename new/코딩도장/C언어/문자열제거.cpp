#include<stdio.h>
#include<string.h>

int main()
{
	char ch[100];
	
	int i;
	int cn =0;
	
	printf("문자열을 제거한 숫자만을 출력합니다. 입력 : ");
	scanf("%s", ch);
	
	char t_ch[strlen(ch)]={0, };
	
	for(i=0; i<strlen(ch); i++)
	{		
		if('0'<=ch[i] && ch[i]<='9')
		{
			t_ch[cn] = ch[i];
			cn++;
		}		
	}	
	
	printf("문자열 제거 후 출력 : ");
	for(i=0; i<cn; i++)
	{
		printf("%c", t_ch[i]);
	}
}
