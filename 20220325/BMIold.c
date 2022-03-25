#include <stdio.h>

int main()
{
    float BMI = 0.0;
    float weight = 84.5; // kg
    float height = 1.70; // m
    //体质指数（BMI）=体重(kg)÷(身高(m)×身高(m))
    BMI = weight / (height * height);
    printf("您的BMI指数是：%f\n", BMI);

    return 0;
}