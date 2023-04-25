#include<stdio.h>
int main()
{
    int number_r, number_n, number;
    printf("Number = ");
    scanf("%d", &number_r);

    number_n = number_r * number_r;
    number = (float)sqrt(number_n);

    printf("Tri tuyet doi la: ",number);
    printf("%d",number);

    return 0 ;
}