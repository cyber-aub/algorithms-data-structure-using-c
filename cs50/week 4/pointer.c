#include <stdio.h>

int main(void){
    int n = 50;
    int* p = &n;
            //pointer
            printf("%p\n", p);
             printf("%p\n", &n);

            //value
            printf("%i\n", *p);
             printf("%i\n", *&n);
}

// %p stands for pointer