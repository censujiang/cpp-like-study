#include <stdio.h>
int main()
{
    int scores[3][10] = {0};
    printf("请输入3个班级10个学生的成绩；\n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &scores[i][j]);
        }
    }
    printf("以下是分析结果；\n");
    printf("%10s\t""班级的班号");
    printf("%10s\t""平均成绩");
    printf("%10s\t""最高分");
    printf("%10s\t""最高分序号");
    printf("========================================================");
    int avg, max, maxIndex, sum;
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        max = scores[i][0];
        maxIndex = 0;
        for (j = 0; j < 10; j++)
        {
            if (scores[i][j] > max)
            {
                max = scores[i][j];
                maxIndex = j;
            }
            sum += scores[i][j];
        }
        printf("%10d\t", i + 1);
        printf("%10d.2f\t", ((float)sum / 10));
        printf("%10d\t", max);
        printf("%10d\t", maxIndex + 1);
    }
    system("pause");
    return 0;
} 
