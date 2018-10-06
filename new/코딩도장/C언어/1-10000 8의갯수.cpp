//8이라는 숫자가 총 몇번 나오는지를 확인하는것이기떄문에 모든수를 배열에 저장해버린다.
 
#include<stdio.h>

int main()
{
 	int i,j=12;
	int arr[50000] = {0, };
	int cnt =0;
	int count = 0;
	 
	for(j=1; j<=10000; j++)
	{
		i = j;
		
		while(i>0)
		{
			arr[cnt] = i%10;
			//printf("%d", arr[cnt]);
			i = i/10;
			cnt++;
		}
	}
	
	for(i=0; i<cnt; i++)
	{
		if(arr[i]==8)
		{
			count++;
		}
	}
	printf("%d", count);	
}
