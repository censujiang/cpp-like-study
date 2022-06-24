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
        "¼��ѧ���ɼ�",
        "����ѧ���ɼ�",
        "��ʾѧ���ɼ�",
        "�޸�ѧ���ɼ�",
        "��ѯѧ���ɼ�",
        "ͳ��ѧ���ɼ�",
        "�˳�ϵͳ"};
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
        printf("������˵����ܣ�");
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
        printf("�������%dλѧ���ĳɼ���", i + 1);
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
    printf("������Ҫ�޸ĳɼ���ѧ����˳��ţ�");
    scanf("%d", &inputPos);
    if (inputPos < 1 || inputPos > n)
    {
        printf("�������...\n");
        return;
    }
    printf("�������޸ĺ�ĳɼ���");
    scanf("%f", &scores[inputPos - 1]);
    printf("�޸ĳɹ�\n");
}
void findData(float scores[], int n)
{
    int i = 0, inputPos = 0;
    printf("������Ҫ�鿴�ɼ���ѧ����˳��ţ�");
    scanf("%d", &inputPos);
    if (inputPos < 1 || inputPos > n)
    {
        printf("�������...\n");
        return;
    }
    printf("��%dλѧ���ĳɼ���%.lf\n��", inputPos, scores[inputPos - 1]);
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
    printf("����ѧ������ͳɼ���%.lf\n", min);
    printf("����ѧ������߳ɼ���%.lf\n", max);
}
