#include <stdio.h>
#include <cs50.h>
#include <string.h>



typedef struct {
    string name;
    string number;

}pb;

int main(void){

    pb p[2];

    p[0].name = "ayoub";
    p[0].number = "554454";

    p[1].name = "hama";
    p[1].number = "55555";




    for( int i = 0; i < 2; i++){
        if(strcmp( p[i].name , "hama" ) == 0){
            printf("i found you  = %s\n", p[i].number);
                return 0;
        }

}
printf("not found\n");
return 1;

// drt not found kharj loop bach matt3awdch 2 fois !
        }



