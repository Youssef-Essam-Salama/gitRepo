#include <stdio.h>

int main(){
    
    int usr_input, sum;
    printf("Enter the number=");
    scanf("%d", &usr_input);

    int usr_input_copy = usr_input;
    int digit;
    
    while(usr_input_copy){
        digit = usr_input_copy%10;
        usr_input_copy /= 10;
        sum += digit*digit*digit;
    }

    if(usr_input == sum){
        printf("armstrong number");
    }else{
        printf("not armstrong number");
    }
    
    return 0;

}