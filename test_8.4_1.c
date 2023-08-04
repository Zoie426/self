#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************************\n");
	printf("*****   1.play    2.exit   *****\n");
	printf("********************************\n");
}

void game()
{
	int n = 0;
	int guess = 0;
	n= rand() % 100 + 1;
	
	while(1)
	{
	printf("请猜数字：");
	scanf("%d", &guess);
	if (guess > n)
	{
		printf("猜大了\n");
	}
	else if (guess < n)
	{
		printf("猜小了\n");

	}
	else 
	{
		printf("猜对了\n");
		break;
	}

	}
}
int main()
{
	int a=0;
	srand((unsigned int)time(NULL));
	do
	{ 
	menu();
	printf("请选择：");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		game();
		break;
	case 2:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误\n");
		break;
	}
	} while (a);
	return 0;
}