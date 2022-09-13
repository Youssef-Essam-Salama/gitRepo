#include <stdio.h>

void edit (int*);

int main(){

    int usr_input;
    printf("Enter the number\n");
    scanf("%d", &usr_input);

    printf("Before calling edit x = %d\n", usr_input);
    edit(&usr_input);
    printf("After calling edit x = %d\n", usr_input);
    
    return 0;
}

void edit (int *x){
    ++*x;
}