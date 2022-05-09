#include <stdio.h>
int main(){
	int arr[3][4] = {
		1,2,3,4,5,6,7,8,9,10,11,12
	};
	
	int j = 0;
	int i = 0;
	int sum = 0;
	for(i=0;i<3 ;i++ )
	{for(j=0;j<4;j++){
		printf("%d\t",arr[i][j]);
		if(i==j){
			sum += arr[i][j];
		}
	}
	printf("\n");
	}
	printf("sum=%d\n",sum);
	return 0;
}
