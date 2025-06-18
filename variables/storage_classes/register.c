#include <stdio.h>
#include <stdlib.h>

int main () {

    // Suggest to store in a register
    register int i;  
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    
    return EXIT_SUCCESS;
}