#include <stdio>
int min(int x, int y){
    if(x<y)
        return x;
    else
        return y;
}
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = min(a,b);
    printf("min is %d",c);
    return 0;
}