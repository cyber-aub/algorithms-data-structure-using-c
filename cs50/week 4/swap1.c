#include <stdio.h>
#include <cs50.h>
void swap1(int a, int b);

int main(void){
    int x =1;
    int y=2;
// pass by value
swap1(x,y);

printf("%i\n",x);
printf("%i\n",y);

}
// x and b is local variable
void swap1(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}