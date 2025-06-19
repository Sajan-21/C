// filename: main.c
#include <stdio.h>

// Declare the external variable and function
extern int a;
void myfun();

int main(void)
{
    // Initialize the global variable
    a = 2;

    // Call the function to print the value of 'a'
    myfun();

    return 0;
}