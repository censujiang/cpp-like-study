# include <stdio.h>

int main(){
    float BMI,weight,height;
    printf("请输入你的体重: ");
    scanf("%f",&weight);
    printf("请输入你的身高: ");
    scanf("%f",&height);
    BMI = weight/(height*height);
    printf("你的BMI是 %.2f\n",BMI);
    if(BMI < 18.5){
        printf("偏瘦\n");
    }
    else if(BMI >= 18.5 && BMI <= 24.9){
        printf("正常\n");
    }
    else if(BMI >= 25 && BMI <= 29.9){
        printf("过重\n");
    }
    else{
        printf("肥胖\n");
    }
    return 0;
}