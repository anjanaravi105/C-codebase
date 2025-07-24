#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float num1,num2,num3,average;
    printf("enter first numbers");
    scanf("%f",&num1);
    printf("enter second numbers");
    scanf("%f",&num2);
    printf("enter third numbers");
    scanf("%f",&num3);
    average=(num1+num2+num3)/3;
    printf("Average is:%f",average);
    return 0;
}