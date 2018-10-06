#include<stdio.h>
#include<Math.h>

void detective_search(float, float); 
int main()
{
	float m;
	float n;

	printf("A씨는 게시판 프로그램을 작성하고 있다. \n\n");
	printf("A씨는 게시물의 총 건수와 한 페이지에 보여줄 게시물수를 입력으로 주었을 때 총 페이지수를 리턴하는 프로그램이 필요하다고한다.\n");
	printf("총건수를 입력해주세요 만약 0라면 출력페이지는 자동으로 0이됩니다.\n");
	scanf("%f", &m);
	
	while(1)
	{
		printf("한페이지에 보여줄 게시물수 를입력해주세요 \n");
		scanf("%f", &n);
		
		if(n<=0)
		{
			printf("다시입력해 주세요 \n");
			
		}
		else{
			break;
		}
		
	}
    detective_search(m, n);
    
    return 0;
}

void detective_search(float m, float n)
{
	int z;
	
	if(m==0)
	{
		z = 0;
	}
	else if(m<=n)
	{
		z = 1;
	}else
	{
	    z = ceil(m/n);	
		
	}		
	printf("총건수 = %d, 한페이지에 보여줄수있는 게시물수= %d , 총페이지수 : %d \n ", (int)m, (int)n, z);	
}
