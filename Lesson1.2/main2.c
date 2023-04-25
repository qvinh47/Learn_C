#include<stdio.h>
int main()
{
    char name[100];

    printf(" What is your name: ");
    gets(name);

    printf(" Hello ");
    printf("%s", name);

    return 0;
}