#include <stdio.h>
#include <cs50.h>
float discount( float price );
int main (void){

float price = get_float("enter price : ");
     float sale = discount(price);
printf(" sale price = %.2f\n", sale);
}

float discount( float price ){
   price = price * .85;
return price;
}