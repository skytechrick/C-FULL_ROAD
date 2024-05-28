#include <stdio.h>
int main(){
    int a,b,c = 0,d = 1,e;
    printf("Enter the number of terms...:");
    scanf("%d",&a);
    for (b = 0; b < a; b++)
    {
        if(b < 2){
            printf("%d ", b);
        }else{
            e = c + d;
            c = d;
            printf("%d ", e);
            d = e;
        }
    }

    return 0;
}