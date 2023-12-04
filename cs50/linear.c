#include <stdio.h>
#include <cs50.h>

// make int array from 7 numbers
// find the number 6 using linear search algo ( for loop )
// if you found the nunmber 6 = print found
//                 return 0;
// else print not found
//              return 1;

int main(void){

int numbers[] = {0,1,2,3,4,5,6};

        for(int i = 0; i < 7; i++){
            if(numbers[i] == 6){
            printf("founded %i in steps\n", i + 1);
                return 0;
        }



 }

printf("not found\n");
        return 1;



}