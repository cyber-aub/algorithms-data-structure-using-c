#include <stdio.h>
#include <cs50.h>
void swap2(int *a, int *b);



int main(void){
    int x = 1;
    int y = 2;


// pass by reference
// we pass here the place of the x not the value of it

    swap2(&x ,&y);
    
printf("%i\n",x);
printf("%i\n",y);
}



// we recieve the address of x using pointer
void swap2(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}