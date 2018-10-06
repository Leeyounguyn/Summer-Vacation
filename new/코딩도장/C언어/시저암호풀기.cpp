#include<stdio.h>
#include<string.h>

int main()
{
	char name[10];
	int i;
	int cn = 0;
	char a = 'Z';
	printf("---시저 암호 풀기---\n바꾸려는 단어를 입력하세요 : ");
	scanf("%s", name);
	printf("\n알파벳 n개 만큼  뒤에 오는 알파벳으로 출력합니다 n을 입력하세요 : ");
	scanf("%d", &cn);
	 
	for(i=0; i<strlen(name); i++)
	{	
		if(cn>0 &&(name[i]=='z' || name[i]=='Z'))
		{
			name[i] = (name[i] - 25);
		}
		else
		{
			name[i] = name[i]+cn;
		}
	}
	printf("%s", name);
	printf("\n");
}
