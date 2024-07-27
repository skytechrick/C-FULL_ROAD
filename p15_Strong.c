#include <stdio.h>
int main(){

    int cf = 0, a, sum = 0, p, tem = 0, vb;
    printf("Enter a Number..:");
    scanf("%d", &a);
    int pl = a;
    if (a <= 0)
    {
        printf("Strong number does not exist");
    }else{

        while (a > 0){
            p = a%10;
            tem = 1;
            while (p > 0)
            {
                tem *= p;
                p--;
            }
            sum += tem;
            
            a /= 10;
        }
        if (pl == sum){
            printf("Strong numeber.");
        }else{
            printf("Not a Strong numeber.");
        }

    }
    return 0;
}