#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[10] = { 0 };
    system("shutdown -s -t 60");
    while (1)
    {
        printf("电脑将在1分钟内关机，如果输入：请不要关机，就取消关机!\n请输入:>");
        scanf("%s", input);
        if (0 == strcmp(input, "请不要关机"))
        {
            system("shutdown -a");
            break;
        }
    }
    return 0;
}