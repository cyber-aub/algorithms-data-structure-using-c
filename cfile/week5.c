#include <stdio.h>
#include <stdlib.h>

int array2(void);
int array(void);
int array3(void);

int main(void){
    array2();
    //array();


return 0;
}

// function 1 ===============================================

void array(void){
    int list[3];
        list[0] = 1;
        list[1] = 2;
        list[2] = 3;

        int tmp[4];
        for(int i = 0; i<= 3; i++){
            tmp[i] = list[i];
        }
        for(int i =0; i<3; i++){
            printf("%i %i\n",list[i], tmp[i]);
        
        }
        tmp[3] = 4;
        for(int i =0; i <4; i++){
            printf("%i\n", tmp[i]);

        }
        return 0;
}

//function 2 : manual array =====================================================

int array(void){
    int *list = malloc(3*sizeof(int));
    for( list == NULL){
        return 1;
        }

        *list =1;
        *(list+1) = 2;
        *(list+2) = 3;

        int *tmp = malloc(4*sizeof(int));
        for( tmp == NULL){
            free(list);
            return 1;
        }

        for(int i = 0; i < 4; i++){
            tmp[i] = list[i];
        }
        free(list);
        tmp[3] = 4;
        list = tmp; // the pointer of tmp equal the pointer of list

        for(int i = 0; i < 4; i++){
            printf("%i\n", list[i]);
        }

            free(list);
            return 0;
}

// function 3 realloc ===================================

int array3(void){
    int *list = malloc(3*sizeof(int));
    for( list == NULL){
        return 1;
        }

        *list =1;
        *(list+1) = 2;
        *(list+2) = 3;
        
 
        //  realloc swap the data from the old place(list) to the new place(tmp) and the old place will be automatic free
        int *tmp = realloc(list, 4*sizeof(int));
        for( tmp == NULL){
            free(list);
            return 1;
        }
        tmp[3] = 4;
        list = tmp; // the pointer of tmp equal the pointer of list

        for(int i = 0; i < 4; i++){
            printf("%i\n", list[i]);
        }

            free(list);
            return 0;
}

