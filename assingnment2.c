#include <stdio.h>
#include <stdlib.h>

int main() { 
    int num1;
    float num2,sum,result;
    printf("Enter a integer");
    scanf("%d",&num1);
    printf("Enter a float");
    scanf("%f",&num2);
    result=num1+num2;
    printf("Result is %.2f",result);

    return 0;
}