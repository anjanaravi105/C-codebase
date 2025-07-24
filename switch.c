#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("1 for porotta.\n2 for biriyani.\n3 for fried rice.\n4 for mandhi.\nENTER YOUR CHOICE");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("you have selected porotta");
        break;
    case 2:
        printf("you have selected biriyani");
        break;
    case 3:
        printf("you have selected fried rice");
        break;
    case 4:
        printf("you have selected mandhi");
        break; 
    default:
       printf("FOOL!!");      
    }
    return 0;
}