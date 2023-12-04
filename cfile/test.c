 #include <stdio.h>

 int main (void){

int x;
printf("enter the number of x :");
if ( scanf("%i", &x) != 1|| x < 0){
    printf("invaild input ");
    printf("%i\n",x);
    return 1;
}
printf("%i\n",x);
int y;
printf("enter the the y:");
scanf("%i", &y);
while(y <= 10){
    printf("hello babe its works\n");
    y = y + 1;
}

return 0;
 }