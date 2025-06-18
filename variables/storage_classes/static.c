#include <stdio.h>
#include <stdlib.h>

void counter() {
    static int count = 0;

    count++;
    printf("count is %d\n",count);
}

int main () {

    counter();//count is 1
    counter();//count is 2
    counter();//count is 3

    return EXIT_SUCCESS;
}

/* Static variable count retains its value b/w function calls.
Static variables remember their previous value */