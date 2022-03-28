# include <stdio.h>
int main(){
    int num1 = 0;
    int num2 = 0;
    printf("请输入num1和num2，用逗号隔开: ");
    scanf("%d,%d",&num1,&num2);
    if (num1 > num2){
        printf("num1>num2！！！\n");
    }else if(num1 < num2){
        printf("num1<num2！！！\n");
    }else{
        printf("num1=num2！！！\n");
    }
    return 0;
}