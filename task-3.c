#define _CRT_SECURE_NO_WARNINGS 1
//循环练习
#include<stdio.h>
//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int q = 0;
//	int m = 1;
//	printf("请输入一个整数：>");
//	int a = scanf("%d", &n);
//	q = n;
//	for (; n > 1; n--)
//	{
//		m = m * n;
//	}
//	printf("%d的阶乘是%d",q,m);
//
//	return 0;
//}

//计算1！+2！+3！+ ... +10!
//int Jc(int n,int m)
//{
//	for (; n > 1; n--)
//	{
//		m = m * n;
//	}
//	
//	return m;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int d = 0;
//	for (a = 1; a < 11; a++)
//	{
//		c = Jc(a, b);
//		d += c;
//	}
//	printf("%d", d);
//	return 0;
//}

//优化1！+2！+3！+ ... +10!
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = 0;
//	for (; i < 4; i++)
//	{
//		j *= i;
//		k += j;
//	}
//
//	printf("%d", k);
//
//	return 0;
//}

//在一个有序数组内查找具体的某个数字n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！");
//	}
//
//	return 0;
//}

#include<string.h>
int main()
{
	char arr1[] = "welcome to bit !!!!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}

	printf("%s\n", arr2);

	return 0;
}

//优化
//

//int main()
//{
//	
//	return 0;
//}