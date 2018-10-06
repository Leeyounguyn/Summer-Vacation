#include<stdio.h>

int main()
{
	char ch;
	
	printf("문자를 입력 받으면 그문자에 해당하는 아스키코드를 출력합니다 문자 입력 : ");
	scanf("%c", &ch);
	
	printf("%c는 아시키코드로 %d입니다. ", ch, ch);
}
