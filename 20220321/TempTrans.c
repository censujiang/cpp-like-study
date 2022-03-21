#include <stdio.h>
void main () {
    float F;
    F = 95.0;
    float C = (F - 32) * 5 / 9;
    printf("%f华氏度对应的摄氏温度是%f摄氏度\n", F, C);

    int num;
    num = 95.83;
    printf("num = %d\n", num);
    return 0;
}