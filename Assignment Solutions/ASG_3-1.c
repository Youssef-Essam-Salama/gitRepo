#include <stdio.h>

void swap(int, int);

int main(){
    int x, y; 

    printf("Enter first number\n");
    scanf("%d", &x);

    printf("Enter second number\n");
    scanf("%d", &y);

    swap(x, y);
    
    return 0;

}

void swap(int x, int y){
    printf("Before swaping\nx = %d \t y = %d\n", x, y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swaping\nx = %d \t y = %d", x, y);

}