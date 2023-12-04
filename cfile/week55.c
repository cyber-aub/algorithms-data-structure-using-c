#include <stdio.h>
#include <stdlib.h>

// enhanced by gpt 


int array3(void);
void array1(void);
int array2(void);

int main(void) {
    array3();
    array2();
    // array();
    return 0;
}

// Function 1 ===============================================

void array1(void) {
    int list[3];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int tmp[4];
    for (int i = 0; i < 3; i++) {
        tmp[i] = list[i];
    }
    for (int i = 0; i < 3; i++) {
        printf("%i %i\n", list[i], tmp[i]);
    }
    tmp[3] = 4;
    for (int i = 0; i < 4; i++) {
        printf("%i\n", tmp[i]);
    }
    // No return value needed for a void function.
}

// Function 2 : Manual Array =====================================================

int array3(void) {
    int *list = malloc(3 * sizeof(int));
    if (list == NULL) {
        return 1; // Memory allocation failure
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL) {
        free(list);
        return 1; // Memory allocation failure
    }

    for (int i = 0; i < 4; i++) {
        tmp[i] = list[i];
    }
    free(list);
    tmp[3] = 4;

    for (int i = 0; i < 4; i++) {
        printf("%i\n", tmp[i]);
    }

    free(tmp);
    return 0;
}

// Function 3 realloc ===================================

int array2(void) {
    int *list = malloc(3 * sizeof(int));
    if (list == NULL) {
        return 1; // Memory allocation failure
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL) {
        free(list);
        return 1; // Memory allocation failure
    }

    tmp[3] = 4;

    for (int i = 0; i < 4; i++) {
        printf("%i\n", tmp[i]);
    }

    free(tmp);
    return 0;
}
