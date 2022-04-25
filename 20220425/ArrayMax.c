#include <stdio.h>
int main()
{
    int a[6];
    printf("请输入6个整数，用空格隔开，按回车确认：\n");
    int i = 0;
    int inputNum = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
        //	a[i]=(i+1)*(i+1);
    }
    printf("这6个数的最大值是：\n");
    int max = a[0];
    for (i = 0; i < 6; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d\n", max);
    // for(i=0;i<6;i++){
    //		printf("%d\n",a[i]);
    //	}
    return 0;
}
