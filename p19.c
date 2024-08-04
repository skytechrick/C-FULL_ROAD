#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

int n;

bool isEmpty(a){
    if(n==0){
        return true;
    }else{
        return false;
    }
}
bool isFull(a){
    if(n==MAX){
        return true;
    }else{
        return false;
    }
}

void create()
{
    int i;
    printf ("create an array");
    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",& a[i]);
    }
}

void display(int a[])
{
    int i;
    if(isEmpty())
    {
        printf("**********arrray is empty************");
        scanf();
    }
}

int main(){
    

    return 0;
}