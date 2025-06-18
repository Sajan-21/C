#include <stdio.h>
#include <stdlib.h>

// Global variable
extern int globalVar = 100;  

void printGlobalVar() {
    printf("%d ", globalVar);
}

int main () {
    
        // Prints: Global variable is: 100
        printGlobalVar();

    return EXIT_SUCCESS;
}