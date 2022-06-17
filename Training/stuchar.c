#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int menu, num;
float student[100];
void shoumenu();
void seekMax(float *, int);
void seekMin(float *, int);
void NoPass(float *, int);
int main(void)
{
    int i;
    printf("请输入学生的人数：\n");
    scanf("%d", &num);
    printf("请依次输入学生成绩：\n");
    for (i = 0; i < num; i++)
    {
        scanf("%f", &student[i]);
    }
    shoumenu();
    return 0;
}
void shoumenu()
{
    printf("请输入您要查询的信息：\n");
    printf("1.查询最高分\n");
    printf("2.查询最低分\n");
    printf("3.查询不及格的学生\n");
    printf("4.退出\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        seekMax(student, num);
        break;
    case 2:
        seekMin(student, num);
        break;
    case 3:
        NoPass(student, num);
        break;
    case 4:
        break;
    default:
        printf("输入错误，请重新输入！\n");
        shoumenu();
    }
}
void seekMax(float *pscore, int stusize)
{
    float max = *pscore;
    int i, falg = 0;
    system("cls");
    for (i = 0; i < stusize; i++)
    {
        if (max < *(pscore + i))
        {
            max = *(pscore + i);
            falg = i;
        }
    }
    printf("成绩最高的是：%.1f\n", *(pscore + falg));
    printf("查找最高分成功，按任意键返回上级菜单\n");
    shoumenu();
}
void seekMin(float *pscore, int stusize)
{
    float min = *pscore;
    int i, falg = 0;
    system("cls");
    for (i = 0; i < stusize; i++)
    {
        if (min > *(pscore + i))
        {
            min = *(pscore + i);
            falg = i;
        }
    }
    printf("成绩最低的是：%.1f\n", *(pscore + falg));
    printf("查找最低分成功，按任意键返回上级菜单\n");
    shoumenu();
}
void NoPass(float *pscore, int stusize)
{
    int i, falg = 0;
    system("cls");
    for (i = 0; i < stusize; i++)
    {
        if (*(pscore + i) < 60)
        {
            printf("第%d个学生的成绩为：%.6f\n", i + 1, *(pscore + i));
            falg = 1;
        }
    }
    if (!falg)
    {
        printf("所有学生都及格！\n");
    }
    printf("查找不及格的学生成功，按任意键返回上级菜单\n");
    shoumenu();
}