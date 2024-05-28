#include <stdio.h>

int main(){

    int a, sum = 0, p;
    printf("Enter a Number..:");
    scanf("%d", &a);

    while (a > 0){
        p = a%10;
        a /=10;
        sum += p;
        
    }

    printf("Sum is %d", sum);
    

    return 0;
}