#include<stdio.h>
int fact(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return fact(n-1)+fact(n-2);
	}
}
int main()
{
	int i,n;
	printf("请输入你要打印的斐波那契数列项数:\n");
	scanf("%d",&n);
	printf("斐波那契数列:");
	for(i=1;i<=n;i++)
	{
		printf("%d ",fact(i));
	}
	return 0;
}
