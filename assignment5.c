#include <stdio.h>
#include <stdlib.h>

int main() {
    float totalmark;
    printf("ENTER YOUR MARK");
    scanf("%f",&totalmark);

    if(totalmark>=90) {
        printf("CONGRATULATION!!Your grade is A");
    }else if(89>=totalmark && totalmark>=80) {
        printf("Your grade is B");
    }else if(79>=totalmark && totalmark>=70) {
        printf("Your grade is C");
    }else if(69>=totalmark && totalmark>=60) {
        printf("Your grade is D");
    }else if(59>=totalmark && totalmark>=50) {
        printf("Your grade is E");
    }else {
        printf("YOU FAILED");
    }

    return 0;
}