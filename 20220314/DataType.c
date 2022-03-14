#include <stdio.h>
int main()
{
    printf("%d \n", 1000);
    printf("%f \n", 3.14);
    printf("%c \n", 'A');
    printf("ABC\n");
    printf("%s \n", "DEFG");

    int num;
    num = 55;
    printf("%d \n", num);
    num = 66;
    printf("%d \n", num);

    short x = 3, y = 4, z = 5;
    long m = 1000, n = 1000;
    unsigned a, b;

    float decNum = 3.14;
    printf("%f \n", decNum);

    double decNum2 = 3.1415926;
    printf("%lf \n", decNum2);

    return 0;
}