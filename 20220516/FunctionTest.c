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
int main(){
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c = min(a,b);
    d = max(a,b);
    e = avg(a,b);
    printf("min is %d,max is %d,avg is %d",c ,d ,e);
    return 0;
}