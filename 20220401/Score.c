# include <stdio.h>
int main(){
    int score = 0;
    printf("请输入你的成绩: ");
    scanf("%d",&score);
    int num = score / 10;
    switch (num)
    {
        case 0:
            printf("不及格\n");
            break;
        case 1:
            printf("不及格\n");
            break;
        case 2:
            printf("不及格\n");
            break;
        case 3:
            printf("不及格\n");
            break;
        case 4:
            printf("不及格\n");
            break;
        case 5:
            printf("不及格\n");
            break;
        case 6:
            printf("及格\n");
            break;
        case 7:
            printf("及格\n");
            break;
        case 8:
            printf("良好\n");
            break;
        case 9:
            printf("优秀\n");
            break;
    }
    return 0;
}