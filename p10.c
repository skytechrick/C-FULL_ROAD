#include <stdio.h>
int main(){
    int a, b, c, d; 
    float x, y;
    printf("Enter the values of a,b,c..:");
    scanf("%d %d %d", &a, &b, &c);
    d = ((b*b) - 4*(a*c));
    if (d<0){
        printf("Roots are imaginary.");
    }else if (d>0){
        x = (-(b) + sqrt(d))/(2*a);
        y = (-(b) - sqrt(d))/(2*a);
        printf("Roots are %f and %f", x, y);
    }else{
        x = (-(b))/(2*a);
        printf("Roots are equal, R1 = R2 = %f",x);
    };
    return 0;
}