#include<stdio.h>
#include<string.h>
//
int main()
{
	char example[]="a1b2cde3~g45hi6";
	int len;
	int i;
	
	len = strlen(example);
	
	for(i=1; i<len; i=i+2)
	{
		if('9'>=example[i] && '0'<=example[i])
		{
			example[i] = '*';
		}
	} 
	
	for(i=0; i<len; i++)
	{
		printf("%c",example[i]);
	}
}
