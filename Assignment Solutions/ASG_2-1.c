#include <stdio.h>

int main(){
    char operate;
    float number_1, number_2, result;
    
    printf("Enter Number_1\n");
    scanf("%f", &number_1);

    printf("Enter the operator\n");
    scanf(" %c", &operate);

    printf("Enter Number_2\n");
    scanf("%f", &number_2);

    switch(operate){
        case '+':
            result = number_1 + number_2; break;
        case '-':
            result = number_1 - number_2; break;
        case '*':
            result = number_1 * number_2; break;
        case '/':
            result = number_1 / number_2; break;
        default:
            printf("Invalid operator.\n"); 

    }
    printf("The result = %.3f\n", result);
    
    return 0;

}