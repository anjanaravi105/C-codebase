#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number1,number2,number3,sum;
    printf("Enter 1st numbers");
    scanf("%d",&number1);
    printf("Enter 2nd numbers");
    scanf("%d",&number2);
    printf("Enter 3rd numbers");
    scanf("%d",&number3);
    sum=number1+number2+number3;
    printf("Result is : %d",sum);
return 0;
}