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
    printf("����ch��ֵ��%c\t����ch�ĵ�ַ��%x \n", ch, &ch);
    printf("����a��ֵ��%d\t����a�ĵ�ַ��%x \n", a, &a);
    printf("����f��ֵ��%f\t����f�ĵ�ַ��%x \n", f, &f);
}