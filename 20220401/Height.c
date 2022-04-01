# include <stdio.h>
# include <stdlib.h>
int main(){
    float faterHeight,motherHeight,girlHeight,boyHeight;
    printf("请输入父亲的身高: ");
    scanf("%f",&faterHeight);
    printf("请输入母亲的身高: ");
    scanf("%f",&motherHeight);
    int sex;
    printf("请输入孩子性别：");
    scanf("%d",&sex);
    if (sex == 1){
        boyHeight = (faterHeight + motherHeight) *1.08 /2;
        printf("如果是男孩，预测身高是：%f",boyHeight);
    }else if (sex == 2){
        girlHeight = (faterHeight + 0.923*motherHeight) /2;
        printf("如果是男孩，预测身高是：%f",girlHeight);
    }
}