#include <stdio.h>
#include <stdlib.h>

int main() {
    float mark;
    printf("Enter Your MARK.\n");
    scanf("%f",&mark);
if(mark>=50 && mark<=100) {
    printf("CONGRATULATION!!YOU PASSED.");
}else {
    printf("YOU FAILED.");
}
return 0;
}