#include <stdio.h>

int main() {

    float a, b;
    printf("Enter temp in f...:");
    scanf("%f", &a);

    b = ((a-32)*5)/9;

    printf("Temperature in C = %f", b);


    return 0;
}