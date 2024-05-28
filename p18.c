#include <stdio.h>

int main (){

    int OP[20], n, min = 0, max = 0;

    printf("Enter number of elements...:");
    scanf("%d",&n);
    printf("Enter data...:");
    for(int i = 0; i < n; i++){
        scanf("%d", &OP[i]);
    }

    printf("Entered data...:");
    for(int l = 0; l < n; l++){
        printf("%d, ", OP[l]);
    };


    max = OP[0];
    min = OP[0];
    for(int t = 0; t < n; t++){
        if (OP[t]> max)
        {
            max = OP[t];
        }
        if(OP[t] < min)
        {
            min = OP[t];
        }
    }
    printf("%d %d", max, min);
    return 0;
}