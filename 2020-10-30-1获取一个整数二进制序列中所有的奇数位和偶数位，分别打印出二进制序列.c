//获取一个整数二进制序列中所有的奇数位和偶数位，分别打印出二进制序列
#include<stdio.h>
void print(int m)
{
	int i = 0;
	for (i = 30; i >= 0; i -= 2)//对于为什么从30开始要理解
		printf("%d ", (m >> i) & 1);
	printf("\n");
	for(i=31;i>=1;i-=2)
		printf("%d ", (m >> i) & 1);
	printf("\n");
}
int main()
{
	int m = 0;
	printf("输入一个整数m：");
	scanf("%d",&m);
	print(m);
	return 0;
}