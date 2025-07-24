#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num,number2,sum;
    printf("enter a number");
    scanf("%d",&num);
    if(num<0){
    
    printf("Number is negative.\nEnter second number");
     scanf("%d",&number2);
    sum=num+number2;
    printf("Result is : %d",sum);


   }else{
        printf("number is positive");
        printf (".Enter second number");
     scanf("%d",&number2);
    sum=num-number2;
    printf("Result is : %d",sum);
    }
    return 0;
}