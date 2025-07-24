#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number1,number2;
    printf("Enter 1st numbers");
    scanf("%d",&number1);
    printf("Enter 2nd numbers");
    scanf("%d",&number2);
    if(number1>number2){
        printf("Greatest number is %d",number1);
    }else{
        printf("Greatest number is %d",number2);
    }
    return 0;
}