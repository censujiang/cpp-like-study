#include <stdio.h>
int main()
{
    int scores[3][10] = {0};
    printf("请输入3个班级10个学生的成绩：\n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &scores[i][j]);
        }
    }
    printf("以下是分析结果；\n");
    printf("%10s\t", "班级的班号");
    printf("%10s\t", "平均成绩");
    printf("%10s\t", "最高分");
    printf("%10s\n", "最高分序号");
    printf("==========================================================\n");
    int max, sum, maxIndex;
    float avg;
    int allMax = 0, allMaxIndex = 0, classNum = 0;
    int classNum2 = 0;
    float avgMax = 0;
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
        avg = (float)sum / 10;
        printf("%10d\t", i + 1);
        printf("%10.2f\t", ((float)sum / 10));
        printf("%10d\t", max);
        printf("%10d\n", maxIndex + 1);
        if (max > allMax)
        {
            allMax = max;
            allMaxIndex = maxIndex;
            classNum = i;
        }
        if (avg > avgMax)
        {
            avgMax = avg;
            classNum2 = i;
        }
    }
    printf("最高分为%d班，序号是%d,分数是%d\n",
           classNum + 1, allMaxIndex + 1, allMax);
    printf("平均成绩最高的是%d班，最高平均成绩是%.2f\n",
           classNum2 + 1, avgMax);
    return 0;
}
