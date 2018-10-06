#include<stdio.h>
#include<string.h>
 
int main()
{
    char s1[100] ="공백을 제외한\n글자수만을 세는 코드 테스트";
    
    int len = 0;
    int count = 0;
    int su_len = 0;
    int i;
    
    len = strlen(s1); 
	
	for(i=0; i<len; i++)
	{
		if(s1[i]==' ' || s1[i] =='\n')
		{
			su_len++;
		}
	}
	
	len = (len - su_len)/2;
	
    printf("글자수 : %d \n", len);   

    return 0;
}


