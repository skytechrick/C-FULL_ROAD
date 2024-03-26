#include <stdio.h>

int main(){


    int y = 1900;
    int z = 2000;
    while (y != 2000)
    {
        if ((y%4 == 0 && y%100 != 0) || y%400 == 0)
        {
            printf("%d\n",y);
        };
        


        y = y + 1;
    };
    

    return 0;
}