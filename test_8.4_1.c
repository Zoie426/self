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
	printf("������֣�");
	scanf("%d", &guess);
	if (guess > n)
	{
		printf("�´���\n");
	}
	else if (guess < n)
	{
		printf("��С��\n");

	}
	else 
	{
		printf("�¶���\n");
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
	printf("��ѡ��");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		game();
		break;
	case 2:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("ѡ�����\n");
		break;
	}
	} while (a);
	return 0;
}