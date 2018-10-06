#include<stdio.h>

int main()
{
    int len,i =0;
    int sum = 0;
    int arr[40]= {1,2,0 };
	
    while(1)
    {
        arr[i+2] = arr[i] + arr[i+1];
        i++;

        if(arr[i]>=4000000)
        {
            len = i;
            break;
        }
    }


    for(i=0; i<len; i++)
    {
        if(arr[i]%2 ==0)
        {
            sum += arr[i];
        }

        printf(" %d  ", arr[i]);
    }

    printf("\nsum = %d  ", sum);

}
