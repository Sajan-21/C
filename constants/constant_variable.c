#include <stdio.h>
#include <stdlib.h>

int main () {

    const int a = 10;
    printf("%d\n",a); // this value cant be modify

    const int b;
    //b = 20; It cant be done because when we use const at the same time it should initialize.
    printf("%d",b); // the output will be some random numbers or zero. It changes. not a proper output.


    return EXIT_SUCCESS;
}