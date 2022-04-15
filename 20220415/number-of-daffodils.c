#include <stdio.h>
#include <math.h>
int main()
{
    int i,x,y,z;
    printf("Number of daffodils: ");
    for(i=100;i<1000;i++)
    {
        x=i%10;
        y=i/10%10;
        z=i/100%10;
        if(i==(x*x*x+y*y*y+z*z*z))
        printf("%d ",i);
    }
    return 0;
}