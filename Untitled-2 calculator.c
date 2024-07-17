// project = > calculator program 

#include<stdio.h>

int main(){

    char operator;
    float number1;
    float number2;

    printf("enter a operator ( + , - , * , / ,) : ");
    scanf("%c",&operator);

    printf("ENTER FIRST NUMBER : ");
    scanf("%f",&number1);

    printf("ENTER THE SECOND NUMBER : ");
    scanf("%f",&number2);

    switch (operator){

        case '+' : 
        printf("addition of two number is :%f", number1 + number2);
        break;

        case '-' :
        printf("subtraction of two number is : %f", number1 - number2);
        break;

        case '*' :
        printf("multiplation of two number is : %f", number1 * number2);
        break;

        case '/' :
        if (number2 != 0){
            printf("divison of two number is : %f", number1 / number2);
        }        
        else{
             printf("invalid Error");
        }
        break;

        default : printf(" not a valid operator");
    }
    return 0;
}
