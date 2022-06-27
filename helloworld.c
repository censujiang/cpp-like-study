#include <stdio.h>
int main()
{   
    int i,sum = 0;
    for(i=100;i<201&&i>99;i++)
    {
        if(i%2==0)
        {
            if(i%3==0)
            {
                printf("%d\n",i);
            }
            continue;
        }
    }
    printf("Hello, World!\n");
    return 0;
}