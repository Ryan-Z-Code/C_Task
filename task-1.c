#define _CRT_SECURE_NO_WARNINGS 1

//�����������Ƚϴ�С
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
	printf("����������������\n");
	int d = scanf("%d %d", &a, &b);
	int c = max(a, b);
	printf("%d��%d�нϴ����� %d\n", a, b, c);
}