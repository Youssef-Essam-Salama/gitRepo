#include <stdio.h>

int main(){
    char is_odd;
    int usr_input;
    printf("Enter the number\n");
    scanf("%d", &usr_input);

    float helper = usr_input/2.0;
    if(helper==(int)helper) // No decimal point
        is_odd=0;
    else
        is_odd=1;
    
    printf("The number is odd = %d\n", is_odd);
    printf("The number is even = %d", !is_odd);
    
    return 0;

}