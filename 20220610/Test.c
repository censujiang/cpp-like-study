#include <stdio.h>
void func(int x){
    x = 10000;
}
void func2(int arr[]){
    arr[0] = 1000;
}
int main(){
    char ch = '#';
    int a = 8;
    float f = 12.34;
    printf("变量ch的值：%c\t变量ch的地址：%x \n", ch, &ch);
    printf("变量a的值：%d\t变量a的地址：%x \n", a, &a);
    printf("变量f的值：%f\t变量f的地址：%x \n", f, &f);
}