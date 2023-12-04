#include <stdio.h>

int main(void){
int x;
int y;
char operator;
char ac = 'y';
while(ac == 'y') {
    printf("enter the first number :");
    if(scanf("%i", &x) != 1 || x < 0){
        printf("invaild input");
        return 1;
    }

    printf("enter the second number :");
    if( scanf("%i", &y) != 1 || y < 0) {
        printf("invaild input");
        return 1;
    }

    printf("enter the operator :");
    scanf(" %c", &operator);
    
switch(operator){
    case '+':
    printf("result is %i\n", x + y );
    case '-':
    printf("result is %i\n", x - y );
    case '*':
    printf("result is %i\n", x * y );
    case '/':
    printf("result is %i\n", x / y );
    case '%':
    printf("result is %i\n", x % y );
    default:
    printf("invaild input habibi \n" );
}


        printf("do you want to continue ? (y/n)\n");
        scanf(" %c", &ac);
}
}

