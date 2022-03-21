# include <stdio.h>
int main()
{
    int num1 =5;
    int num2 =20;
    int sum = num1 + num2;
    printf("sum = %d\n", sum);
    int diff = num1 - num2;
    printf("两个数的差 = %d\n", diff);
    int prod = num1 * num2;
    printf("两个数的积 = %d\n", prod);
    float quo = num1 / num2;
    printf("两个数的商 = %d\n", quo);
    int mod = num1 % num2;
    printf("两个数的余数 = %d\n", mod);
    /*num1 = num1 + 1;*/
    printf("++num1 = %d\n", ++num1);
    printf("num1 = %d\n", num1);
    /*num1 = num1 - 1;*/
    printf("num1-- = %d\n", num1--);
    printf("num1 = %d\n", num1);

    num1 = 666;
    num1 += 2;
    printf("num1 = %d\n", num1);

    num1 = (3+2,5+5,7-4);
    printf("num1 = %d\n", num1);

    num1 = 3+2*6;
    printf("num1 = %d\n", num1);
    return 0;
}