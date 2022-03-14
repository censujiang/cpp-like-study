#include <stdio.h>
int main()
{
    printf("各种数据类型长度：\n");
    printf("整型: --------------- %d\n", sizeof(int));
    printf("长整型: ------------- %d\n", sizeof(long));
    printf("短整型: ------------- %d\n", sizeof(short int));
    printf("单精度浮点型: ------ %d\n", sizeof(float));
    printf("双精度浮点型: ------ %d\n", sizeof(double));
    printf("长双精度浮点型: ------------- %d\n", sizeof(long double));
    return 0;
}