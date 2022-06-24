#include <stdio.h>
void inputData(float scores[], int n);
void displayData(float scores[], int n);
void sortData(float scores[], int n);
void updataData(float scores[], int n);
void findData(float scores[], int n);
float arrMin(float a[], int n);
float arrMax(float a[], int n);
void calData(float scores[], int n);
int main()
{
    int M = 7;
    char meun[][30] = {
        "录入学生成绩",
        "排序学生成绩",
        "显示学生成绩",
        "修改学生成绩",
        "查询学生成绩",
        "统计学生成绩",
        "退出系统"};
    float student[5] = {0.0f};
    int n = 5;
    int input = 0;
    int i;
    do
    {
        for (i = 0; i < M; i++)
        {
            printf("%d.%s\n", i + 1, meun[i]);
        }
        printf("请输入菜单功能：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            inputData(student, n);
            break;
        case 2:
            sortData(student, n);
            break;
        case 3:
            displayData(student, n);
            break;
        case 4:
            updataData(student, n);
            break;
        case 5:
            findData(student, n);
            break;
        case 6:
            calData(student, n);
            break;
        }
    } while (input != 7);
    return 0;
}
void inputData(float scores[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d位学生的成绩：", i + 1);
        scanf("%f", &scores[i]);
    }
}
void displayData(float scores[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%.lf\t", scores[i]);
        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }
}
void sortData(float scores[], int n)
{
    int i = 0, j = 0;
    float arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = scores[i];
    }
    float temp;
    for (j = 0; j < n - 1; j++)
    {
        for (i = n - 1; i > j; i--)
        {
            if (arr[i - 1] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    }
    displayData(arr, n);
}
void updataData(float scores[], int n)
{
    int i = 0, inputPos = 0;
    printf("请输入要修改成绩的学生的顺序号：");
    scanf("%d", &inputPos);
    if (inputPos < 1 || inputPos > n)
    {
        printf("输入错误...\n");
        return;
    }
    printf("请输入修改后的成绩：");
    scanf("%f", &scores[inputPos - 1]);
    printf("修改成功\n");
}
void findData(float scores[], int n)
{
    int i = 0, inputPos = 0;
    printf("请输入要查看成绩的学生的顺序号：");
    scanf("%d", &inputPos);
    if (inputPos < 1 || inputPos > n)
    {
        printf("输入错误...\n");
        return;
    }
    printf("第%d位学生的成绩是%.lf\n：", inputPos, scores[inputPos - 1]);
}
float arrMin(float a[], int n)
{
    float min = 0.0f;
    int i = 0;
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
float arrMax(float a[], int n)
{
    float max = 0.0f;
    int i = 0;
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void calData(float scores[], int n)
{
    float min = arrMin(scores, n);
    float max = arrMax(scores, n);
    printf("所有学生的最低成绩是%.lf\n", min);
    printf("所有学生的最高成绩是%.lf\n", max);
}
