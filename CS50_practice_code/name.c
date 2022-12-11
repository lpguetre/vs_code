#include <stdio.h>

int main(void) 
{
    signed char name[30];
    scanf("%s", &name);
    printf("hello, %s!\n", &name);
}