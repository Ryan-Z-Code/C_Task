#define _CRT_SECURE_NO_WARNINGS 1
//�������룬ȷ��������
#include<stdio.h>
int sum(int a)
{
	int c = 0;
	//static���εı�������������Ϊ��������
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}

int main()
{
	int i = 0;
	int a = 2;
	for (i; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
	return 0;
}

//i=0ʱ��a=2,c=0 -->c+=1 -->c=1
//           b=3 -->b+=2 -->b=5
//             return(a+b+c)-->8

//i=1ʱ��a=2,c=0 -->c+=1 -->c=1
//           b=5 -->b+=2 -->b=7
//             return(a+b+c)-->10

 //i=2ʱ��a=2,c=0 -->c+=1 -->c=1
//           b=7 -->b+=2 -->b=9
//             return(a+b+c)-->12

 //i=3ʱ��a=2,c=0 -->c+=1 -->c=1
//           b=9 -->b+=2 -->b=11
//             return(a+b+c)-->14

//i=4ʱ��a=2,c=0 -->c+=1 -->c=1
//           b=11 -->b+=2 -->b=13
//             return(a+b+c)-->16

//i=5ʱ,����ѭ��