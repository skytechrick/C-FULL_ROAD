#include <stdio.h>

int main() {

    int a, b;
    printf("Enter two number (A) & (B)...:");
    scanf("%d %d", &a, &b);
    printf("Number before swapping A = %d & B = %d\n", a , b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Number After swapping A = %d & B = %d\n", a , b);

    return 0;
}