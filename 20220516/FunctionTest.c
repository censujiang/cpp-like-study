#include <stdio.h>
int min(int x, int y){
    if(x<y)
        return x;
    else
        return y;
}
int max(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}
float avg(int x, int y){
    return (x+y)/2.0;
}
void func3(char sex){
    if (sex == "N"){
        printf("我是男生\n");
    }else{
        printf("我是女生\n");
    }
}
int main(){
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&f);
    func3(f);
    c = min(a,b);
    d = max(a,b);
    e = avg(a,b);
    printf("min is %d,max is %d,avg is %d",c ,d ,e);
    return 0;
}