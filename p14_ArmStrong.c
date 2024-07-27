#include <stdio.h>
int main(){

    int cf = 0, a, sum = 0, p, tem = 0, vb;
    printf("Enter a Number..:");
    scanf("%d", &a);
    int pl = a;
    if (a == 1 || a == 0)
    {
        printf("Armstrong number.");
    }else{
        while(pl > 0){
            cf++;
            pl = pl/10;
        }
        pl = a;
        while (a > 0){
            p = a%10;
            tem = 1;
            vb = cf;
            while (vb > 0)
            {
                tem *= p;
                vb--;
            }
            sum += tem;
            
            a /= 10;
        }
        if (pl == sum){
            printf("Armstrong numeber.");
        }else{
            printf("Not a Armstrong numeber.");
        }

    }
    return 0;
}