#include <stdio.h>


int main(int argc , char* argv[]){
    if(argc != 2){
        return 1;
    }

FILE* file  = fopen(argv[1],"r");
    if(file == NULL){
        return 1;
    }
// we will use unsigned char cz char (-127 127) look at ascii table
// unsigned char provide ( 0 - 255) so we can store the jpg byte

unsigned char c[3];
    fread(c, 1, 3, file);
    if(c[0] == 0xff && c[1] == 0xd8 && c[2] == 0xff){
        printf("yes, possibly\n");
    }else{printf("no\n");}
fclose(file);










}