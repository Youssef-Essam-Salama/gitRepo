#include <stdio.h>

void fibonacci_iterative(int x);
void fibonacci_recursive(int x);

int main(){
    int usr_input;
    printf("Enter the number of terms: ");
    scanf("%d", &usr_input);

    fibonacci_iterative(usr_input);
    // fibonacci_recursive(usr_input);

    return 0;
}

void fibonacci_iterative(int x){
    int element_n_2 = 0, element_n_1 = 1, element_n;
    printf("Fibonacci Series: ");
    for(int i=0; i<x; i++){
        if (i==0){
            printf("%d, ", element_n_2);
        }else if(i==1){
            printf("%d, ", element_n_1);
        }else{
            element_n = element_n_2 + element_n_1;
            printf("%d, ", element_n);
            element_n_2 = element_n_1;
            element_n_1 = element_n;
        }
    }
}

int fibonacci_recursive_helper(int x){
    if(x==1){
        return 0;
    }
    else if (x==2){
        return 1;
    }else{
        return fibonacci_recursive_helper(x-1) + fibonacci_recursive_helper(x-2);
    }
}

void fibonacci_recursive(int x){
    printf("Fibonacci Series: ");
    for(int i=1; i<=x; i++){
            printf("%d, ", fibonacci_recursive_helper(i));
    }
}
