#include <stdio.h>
int main(){
    int choice;
    while (1)
    {
        printf("************ѧ���ɼ�����ϵͳ*************\n");
        printf("1.����ѧ���ɼ�\n");
        printf("2.����ѧ���ɼ�\n");
        printf("3.��ʾѧ���ɼ�\n");
        printf("4.�޸�ѧ���ɼ�\n");
        printf("5.��ѯѧ���ɼ�\n");
        printf("6.ͳ��ѧ���ɼ�\n");
        printf("7.�˳�ϵͳ\n");
        printf("*****************************************\n");
        printf("��ѡ��1~7��");
        scanf("%d",&choice);
        if (choice == 1){
            printf("��ѡ�����:1.����ѧ���ɼ�\n");
        }else if(choice == 2){
            printf("��ѡ�����:2.����ѧ���ɼ�\n");
        }else if(choice == 3){
            printf("��ѡ�����:3.��ʾѧ���ɼ�\n");
        }else if(choice == 4){
            printf("��ѡ�����:4.�޸�ѧ���ɼ�\n");
        }else if(choice == 5){
            printf("��ѡ�����:5.��ѯѧ���ɼ�\n");
        }else if(choice == 6){
            printf("��ѡ�����:6.ͳ��ѧ���ɼ�\n");
        }else if(choice == 7){
            printf("��ѡ�����:7.�˳�ϵͳ\n");
            break;
        }
    }
    return 0;
}
