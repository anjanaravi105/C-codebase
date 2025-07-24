#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1,num2,choice,result;
    printf("enter 2 number");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition.\n2 for substraction.\n3 for multiplication.\n4 for division.\nEnter your choice");
    scanf("%d",&choice);
    if(choice==1){
        result=num1+num2;
        printf("Result=%d",result);
    }else if(choice==2){
        result=num1-num2;
        printf("Result=%d",result);
    
    }else if(choice==3){
        result=num1*num2;
        printf("Result=%d",result);
    }else if(choice==4){
        result=num1/num2;
        printf("Result=%d",result);
    }else {
        printf("FOOL!!!");
    }
    return 0;
}
