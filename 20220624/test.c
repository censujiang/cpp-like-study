#include <stdio.h>
int main(){
    int a,b;
    int x= (a=55,b=22,a+1);
    printf("%d",x);
    return 0;
}
int main(){
    int a,b;
    int x= (a=57,b=22,a+1);
    printf("%d",x);
    return 0;
}