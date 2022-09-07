#include <stdio.h>

int main(){
    int number, bit_to_toggle;

    printf("Enter any number: ");
    scanf("%d", &number);
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &bit_to_toggle);

    int toggled_number = number ^ (1<<bit_to_toggle);
    printf("Bit toggled successfully.\n\n");
    
    printf("Number before toggling 1 bit: %d (in decimal)\n", number);
    printf("Number after toggling 1 bit: %d (in decimal)\n", toggled_number);
    
    return 0;

}