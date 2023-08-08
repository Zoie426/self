#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, input;
	int num[100];
	printf("Example Input\n");
	scanf("%d", &input);
	for (i = 0; input > 0; i++) {
		num[i] = input % 10;		//每位放进数组
		input = input / 10;			//下一位
	}
	for (j = 0; j < i / 2; j++) {
		if (num[j] != num[i - j - 1]) break;	//两端比较
	}
	i / 2 == j ? printf("Example Output\ntrue") : printf("Example Output\nfalse");
	return 0;
}
