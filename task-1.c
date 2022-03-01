#define _CRT_SECURE_NO_WARNINGS 1

//创建函数，比较大小
#include<stdio.h>
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a;
	int b;
	printf("请输入两个整数：\n");
	int d = scanf("%d %d", &a, &b);
	int c = max(a, b);
	printf("%d和%d中较大数是 %d\n", a, b, c);
}