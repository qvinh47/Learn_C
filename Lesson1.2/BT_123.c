#include<stdio.h>
int main()
{   
    int a,b,c,number,sum;    

    printf("Number = ");
    scanf("%d", &number);

    a = number / 100; 
    b =(number % 100)/10;
    c = number %10;
    sum= a+b+c;

    printf("Tong cac chu so la: ");
    printf("%d", sum);

    return 0;

}

