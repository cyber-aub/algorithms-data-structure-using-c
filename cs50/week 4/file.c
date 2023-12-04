#include <stdio.h>
#include <cs50.h>

int main(viod){

FILE* myfile = fopen("fb.csv","a");
char* name = get_string("enter name:");
char* fb = get_string("enter fb:");

    fprintf(myfile,"%s%s\n", name, fb);
    fclose(myfile);
// mood     delete      create
// r        no          no
// w        yes         yes
//a         no          yes

}