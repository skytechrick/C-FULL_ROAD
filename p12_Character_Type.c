#include <stdio.h>
#include <ctype.h>

int main(){
    char AA;


    printf("Enter a character...:");
    scanf("%c", &AA);
    if(AA >= 'A' && AA <= 'Z'){
        printf("Character is uppercase alphabet..:%c \n", AA);
        printf("And lower case...:%c", AA+32);

    }else if(AA >= 'a' && AA <= 'z'){
        printf("Character is lowercase alphabet..:%c \n", AA);
        printf("And upper case...:%c", AA-32);

    }else if(AA >= '0' && AA <= '9'){
        printf("Character is Number..:%c", AA);
    }else{
        printf("Character is special character..:%c", AA);
    }


    return 0;
}