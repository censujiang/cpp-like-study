#include <stdio.h>
int main(){
    int choice;
    while (1)
    {
        printf("************学生成绩分析系统*************\n");
        printf("1.输入学生成绩\n");
        printf("2.排序学生成绩\n");
        printf("3.显示学生成绩\n");
        printf("4.修改学生成绩\n");
        printf("5.查询学生成绩\n");
        printf("6.统计学生成绩\n");
        printf("7.退出系统\n");
        printf("*****************************************\n");
        printf("请选择1~7：");
        scanf("%d",&choice);
        if (choice == 1){
            printf("您选择的是:1.输入学生成绩\n");
        }else if(choice == 2){
            printf("您选择的是:2.排序学生成绩\n");
        }else if(choice == 3){
            printf("您选择的是:3.显示学生成绩\n");
        }else if(choice == 4){
            printf("您选择的是:4.修改学生成绩\n");
        }else if(choice == 5){
            printf("您选择的是:5.查询学生成绩\n");
        }else if(choice == 6){
            printf("您选择的是:6.统计学生成绩\n");
        }else if(choice == 7){
            printf("您选择的是:7.退出系统\n");
            break;
        }
    }
    return 0;
}
