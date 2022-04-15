#include <stdio.h>
#include <math.h>
int main()
{
    int i,x,a;
    printf("闰年: ");
    for(i=1000;i<2022;i++)
    {
        x=i%4;
        if(x==0)
        {
            printf("%d ",i);
            a++;
        }
    }
    printf("\n共有%d个闰年",a);
    return 0;
}