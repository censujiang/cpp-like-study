#include <stdio.h>
int main()
{
    int i, j, n;
    printf("请输入n：");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (j = n - i - 1; j < n + i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}