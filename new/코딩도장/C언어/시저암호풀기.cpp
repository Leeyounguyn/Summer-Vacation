#include<stdio.h>
#include<string.h>

int main()
{
	char name[10];
	int i;
	int cn = 0;
	char a = 'Z';
	printf("---���� ��ȣ Ǯ��---\n�ٲٷ��� �ܾ �Է��ϼ��� : ");
	scanf("%s", name);
	printf("\n���ĺ� n�� ��ŭ  �ڿ� ���� ���ĺ����� ����մϴ� n�� �Է��ϼ��� : ");
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
