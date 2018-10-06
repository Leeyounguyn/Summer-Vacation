#include <stdio.h>
void change(int a, int b)
{
    int d[10001],i, e, c, j= -1;
    for(i=a;i<=b;i++)
    {
        c=1;
        e=i;
        for(;;)
        {
            if(e==1)break;
            c++;
            if(e%2==1)e=e*3+1;
            else e=e/2;
        }
        d[i]=c;
    }
    for(i=a;i<=b;i++)
    {
        if(d[i]>j) j=d[i];
    }
    for(i=a;i<=b;i++)
    {
        if(j==d[i])break;
    }
    printf("%d",j);
}
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   spy(a,b);
}

