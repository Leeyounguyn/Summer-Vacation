#include <stdio.h>

int main(void)
{
    int arr1[100], arr3[100], arr5[100], arr6[100], arr7[100];
    int a = 0, b = 0, c = 0, d = 0, i = 0, j = 0, k = 0, p = 0, m = 1, s = 0, t = 0, u = 0, v = 0, x = 0, y = 0;

    printf("ȸ������ �Ǳ����� ��� �ٲپ��� ������, �� �׷��� �� ����� ȸ������ �˷��ְڴ�.\n�� ���ڸ� �׽�Ʈ �� �� ù��° �ٿ� �Է��ϰ�\n�����ٺ��� �׸�ŭ�� �׽�Ʈ ���ڸ� �� ���ο� �Է��Ͽ���.\n");
    scanf("%d\n", &a);

    for(i = 0; i < a; i++)
    {
        scanf("%d", &arr7[i]);
    }   

    while(v!=a)
    {
        x = arr7[v];
        s = x;
        y = 0;
        while(1)
        {
            i = 0;
            j = 0;
            t = s;
            while(1)
            {   
                k = s%10;           
                if(s==0)
                    break;  
                arr3[i] = k;
                s = (int) s/10;
                i++;
                j++;
            }
            i = 0;
            j = j-1;
            for(i = 0; i <= j; i++)
            {
                arr5[i] = arr3[i];
                arr6[i] = arr3[j-i];
            }
            i = 0;
            for(i = 0; i <= j; i++)
            {
                if(arr5[i]==arr6[i])
                {               
                    if(i==j)
                        break;
                }
                else
                    break;
            }
            if(arr5[i]==arr6[i])
            {   

                printf("%d %d\n", y, t);            
                break;
            }
            else if(arr5[i]!=arr6[i])
            {                           
                y++;
                i = 0;
                m = 1;
                s = 0;
                for(i = 0; i <= j; i++)
                {
                    arr1[i] = (arr5[i]+arr6[i])*m;
                    m = m*10;
                    s = s+arr1[i];
                }
                if(t>=1050000000)
                {
                    if(s<2100000000)
                        break;
                }
                if(s>2100000000 || s < 0)
                    break;  
            }
        }   
        v++;
    }   
    return 0;
}
