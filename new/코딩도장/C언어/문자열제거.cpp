#include<stdio.h>
#include<string.h>

int main()
{
	char ch[100];
	
	int i;
	int cn =0;
	
	printf("���ڿ��� ������ ���ڸ��� ����մϴ�. �Է� : ");
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
	
	printf("���ڿ� ���� �� ��� : ");
	for(i=0; i<cn; i++)
	{
		printf("%c", t_ch[i]);
	}
}
