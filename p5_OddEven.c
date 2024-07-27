#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a number..:");
    scanf("%d", &a);
    b = a%2;
    if (b==0){
        printf("Number is even.");
    } else {
        printf("Number is odd.");
    };
    return 0;
}