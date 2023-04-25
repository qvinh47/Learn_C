#include<stdio.h>
int main()
    {
    int yearofbirth, age;

    printf("Year of birth: ");
    scanf("%d",  &yearofbirth);

    age = 2023 - yearofbirth;

    printf("Your age: ");
    printf("%d", age);

    return 0;
       
    }
    