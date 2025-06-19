#include <stdio.h>
#include <stdlib.h>

int global = 10;

void displayVoid() {

    printf("global variable from displayVoid : %d\n", global);

}

int main () {

    displayVoid();
    printf("global variable from main : %d", global);

    return EXIT_SUCCESS;
}

// we can access global variable from any where because it declared globally