#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_string(char*);

int main(){
    char str[] = "i like this program very much";
    
    reverse_string(str);
    printf("%s\n", str);

    return 0;
}

void reverse_string(char *str){
    
    char reverse_str[strlen(str)];
    int word_start=strlen(str)-1, word_end=strlen(str)-1;
    int current_start_index=0;

    while(word_start>=0){
        while(word_start>=0 && str[word_start]!=' ')
            word_start--;
        for(int i=word_start+1; i<=word_end; i++){
            reverse_str[current_start_index++] = str[i];
        }
        if(current_start_index < strlen(str))
            reverse_str[current_start_index++] = ' ';
        
        word_end = --word_start;
    }
    
    strcpy(str, reverse_str);
}