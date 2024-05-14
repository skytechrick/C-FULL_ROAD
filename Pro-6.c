#include <stdio.h>
int main(){
    int a, b;
    b = 1;
    printf("Enter a number....:");
    scanf("%d",&a);
    for (int i = 2; i < a ; i++){
        if (a%i == 0) {
            b = 2;
            printf("The number is not prime.");
            break;
        }
    }
    if(b == 1){
        printf("The number is prime.");
    };
    return 0;
}