#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int n,left, right, lenth;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	lenth = sizeof(arr) / sizeof(int);
	left = 0;
	right = lenth - 1;
	scanf("%d", &n);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了且下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");
	return 0;
}