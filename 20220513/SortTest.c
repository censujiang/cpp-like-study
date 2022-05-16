#include <stdio.h>
int main(){
    int arr[5] = {5,4,3,2,1};
    int i;
    for(i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
        }
        printf("%d ",arr[i]);
    }
    printf("\n",arr[i]);
    return 0;
}