#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    int count =0; 
    scanf("%d", &num);
    int temp_num = num;
    int result =0;
    int i = 10;

    while(num>0)
    {
        count++;
        num = num/10;
    }

    if(count==1)
    {
        printf("입력 : %d 출력 : 1의 자리수 \n", temp_num);
    }
    else
    {
        result = (int) pow((double)i, (double)count-1);
        printf("입력 : %d 출력 : %d의 자리수 \n", temp_num, result);
    }

    return 0;

}
