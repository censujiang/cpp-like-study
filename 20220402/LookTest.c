# include <stdio.h>
int main(){
    double out = 1;
    int i = 0;
    while (i < 10) {
        out = out * 2;
        i++;
    }
    printf("%f\n", out);
    return 0;
}