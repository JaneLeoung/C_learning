#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int yourinput;
    printf("input your selection(1/0):");
    scanf("%d", &yourinput);
    if (yourinput == 1)
        printf("your input is 1");
    else
        printf("your input is 0");
    return 0;
}

