#include <stdio.h>
#include <stdlib.h>

int main() {
    int p;
    float r,n,simpleinterest;
    printf("Enter principal amount");
    scanf("%d",&p);
    printf("Enter interest rate");
    scanf("%f",&r);
    printf("Enter number of years");
    scanf("%f",&n);

    simpleinterest=(p*r*n)/100;

    printf("SIMPLE INTEREST IS %f",simpleinterest);
    return 0;
}