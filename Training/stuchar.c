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
    printf("������ѧ����������\n");
    scanf("%d", &num);
    printf("����������ѧ���ɼ���\n");
    for (i = 0; i < num; i++)
    {
        scanf("%f", &student[i]);
    }
    shoumenu();
    return 0;
}
void shoumenu()
{
    printf("��������Ҫ��ѯ����Ϣ��\n");
    printf("1.��ѯ��߷�\n");
    printf("2.��ѯ��ͷ�\n");
    printf("3.��ѯ�������ѧ��\n");
    printf("4.�˳�\n");
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
        printf("����������������룡\n");
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
    printf("�ɼ���ߵ��ǣ�%.1f\n", *(pscore + falg));
    printf("������߷ֳɹ���������������ϼ��˵�\n");
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
    printf("�ɼ���͵��ǣ�%.1f\n", *(pscore + falg));
    printf("������ͷֳɹ���������������ϼ��˵�\n");
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
            printf("��%d��ѧ���ĳɼ�Ϊ��%.6f\n", i + 1, *(pscore + i));
            falg = 1;
        }
    }
    if (!falg)
    {
        printf("����ѧ��������\n");
    }
    printf("���Ҳ������ѧ���ɹ���������������ϼ��˵�\n");
    shoumenu();
}