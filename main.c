#include <stdio.h>
// #include <stdlib.h>

int main(int argc, char *argv[])
{
    //int a=5, b=7;
    //int add=a+b, diff=a-b, mul=a*b, mod=a%b;
    //float div = (float)a/b;
    //printf("Addition is %d\n", add);
    //printf("Subtraction is %d\n", diff);
    //printf("Multiplication is %d\n", mul);
    //printf("Division is %f\n", div);
    //printf("Modulo is %d\n", mod);

    //printf("pre-post is %d\n", a++ + ++a); // tricky 1

    //printf("%d\n", 5|10);
    //printf("char is %d\n", sizeof(char));
    //printf("short is %d\n", sizeof(short));
    //printf("int is %d\n", sizeof(int));
    //printf("long is %d\n", sizeof(long));
    //printf("long long is %d\n", sizeof(long long));
    //printf("float is %d\n", sizeof(float));
    //printf("double is %d\n", sizeof(double));
    //printf("long double  is %d\n", sizeof(long double));
    /*
    int x, y;
    printf("Enter first value: ");
    scanf("%d", &x);
    printf("Enter second value: ");
    scanf("%d", &y);
    printf("The sum is %d\n", x+y);
    printf("The diff is %d\n", x-y);
    printf("The mul is %d\n", x*y);
    printf("The div is %f\n", (float)x/y);
    printf("The mod is %d\n", x%y);
    */
    // int x=5, y=10;
    // printf("%d", x + ++x);
    /*
    if(x==5){
        x++;
        printf("I am in if condition. x is %d", x);
    }else{
        x--;
        printf("I am in else. x is %d", x);
    }

    if(x<10){
        printf("x is less than 10\n");
        if(x<7){
            printf("x is less than 7");
        }
    }

    if ((x==5)&&(y==10)){
        printf("I am in if");
    }

    int grade;
    char letter_grade;
    char grade_in_bound = 1;
    printf("Please enter the grade: ");
    scanf("%d", &grade);
    if(grade>=90 && grade<=100){
        letter_grade='A';
    }else if(grade>=80 && grade<90){
        letter_grade='B';
    }else if(grade>=60 && grade<80){
        letter_grade='C';
    }else if(grade>=33 && grade<60){
        letter_grade='D';
    }else if (grade>=0 && grade<33){
        letter_grade='F';
    }else{
        printf("Grade out of bound");
        grade_in_bound=0;
    }
    if(grade_in_bound)
        printf("Your Grade is %c", letter_grade);


    for(int i=0; i<10; i+=2){
        printf("Youssef %d\n", i);
    }
    int i=0;
    while(i<10){
        printf("Youssef %d\n", i);
        i++;
    }
    i=0;
    do{
        printf("Youssef %d\n", i);
        i++;
    }while(i<10);

    int numbers[10];
    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", numbers+i);
    }

    int number_to_search, index;
    char is_number_found=0;
    printf("Enter number to search for: ");
    scanf("%d", &number_to_search);

    for(int i=0; i<10; i++){
        // printf("%d", numbers[i]);
        if(numbers[i]==number_to_search){
            is_number_found=1;
            index=i+1;
            break;
        }
    }

    if(is_number_found){
        printf("The number is entered at index %d", index);
    }else{
        printf("The number has not been entered");
    float z=3.0; // float error (not it)
    while(z!=4.0){
        printf("%f ", z);
        z+=0.1;
    }

    for(int i=1; i<=5; i++){
        if (i==2)
            continue;
        printf("%d\n", i);
    }
    printf("\n");
    for(int i=1; i<=5; i++){
        printf("%d\n", i);
        if (i==2)
            break;
    }

    float number, sum=0;
    for(int i=0; i<5; i++){
        printf("Enter a number: ");
        scanf("%f", &number);
        sum+=number;
    }
    printf("The sum of the numbers is %f\n", sum);
    printf("The average of the numbers is %f", sum/5);

    while(1){
        int ans;
        char z;
        printf("3*4= ??\n");
        scanf("%d", &ans);
        if (ans == 12)
            printf("Correct Answer\n");
        else
            printf("Wrong Answer\n");
        printf("Press 1 to continue or 2 to exit\n");
        scanf("%d", &z);
        if(z==2)
            break;
    }
    while(1){
        float usr_num;
        printf("Enter a number: ");
        scanf("%f", &usr_num);

        printf("Multiplication table:\n");
        for(int i=1; i<=12; i++){
            printf("%f * %d = %f\n", usr_num, i, usr_num*i);
        }
        printf("\n");
    }
    int result;
    float usr_num;
    while(1){
        result=1;
        printf("Enter a number: ");
        scanf("%f", &usr_num);
        if(usr_num<0 || (int)usr_num!=usr_num){
            printf("Invalid number\n");
        }else{
            for(int i=2; i<=(int)usr_num; i++){
                result*=i;
            }
            printf("Factorial is %d\n", result);
        }
    }
    */

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

    printf("Hello from the cloned repo");
    printf("Hello from the cloned local branch");
    printf("Hello from accidental commit message");
    printf("Hello cherry-pick");
    
    return 0;
}
