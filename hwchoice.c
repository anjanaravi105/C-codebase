#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1,num2,num3,choice,result,temp;
    printf("Enter 3 numbers: ");
    scanf("%f%f%f",&num1,&num2,&num3);
    printf("1 for average.\n2 for largest number.\n3 for smallest number.\n4 for displaying numbers in Ascending order.\nEnter you choice");
    scanf("%f",&choice);
    if(choice==1){
        result=(num1+num2+num3)/3;
        printf("Average = %.2f",result);
    }else if(choice==2){
        if  (num1==num2 && num2==num3) {
           printf("ALL NUMBERS ARE EQUAL.\n So Largest number is : %.0f",num1);
        }else if (num1>=num2 && num1>=num3) {
            printf("Largest number is : %.0f",num1);
        }else if(num2>=num1 && num2>=num3) {
            printf("Largest number is : %.0f",num2);
        }else{
            printf("Largest number is : %.0f",num3);
    }
}else if(choice==3) {
    if  (num1==num2 && num2==num3) {
           printf("ALL NUMBERS ARE EQUAL.\n So Smallest number is : %.0f",num1);
        }else if (num1<=num2 && num1<=num3) {
            printf("Smallest number is : %.0f",num1);
        }else if(num2<=num1 && num2<=num3) {
            printf("Smallest number is : %.0f",num2);
        }else{
            printf("Smallest number is : %.0f",num3);
    }

}else if(choice==4) {
    if(num1>num2) {
        temp=num1;
        num1=num2;
        num2=temp;
    }
    if(num1>num3) {
        temp=num1;
        num1=num3;
        num3=temp;
    }if (num2>num3) {
        temp=num2;
        num2=num3;
        num3=temp;
    }
    printf("Numbers in ascending order : %.0f<%.0f<%.0f",num1,num2,num3);
}else {
        printf("FOOL!!!");
    }
    return 0;
}