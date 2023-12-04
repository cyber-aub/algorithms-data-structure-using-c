#include <stdio.h>




int main(void){

    int numbers[] = {4,5,5,4,8,4,7,9,6};

// numbers is a pointer !!!

            printf("%p\n", numbers);
            printf("%p\n", &numbers[0]);
}