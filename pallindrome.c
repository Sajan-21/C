#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    char str[100];
    int len, i, flag = 0;

    printf("enter a string");
    scanf("%s",str);

    len = strlen(str);

    for(i=0; i<=len/2; i++) {
        if(str[i] != str[len - 1 - i]) {
                flag = 1;
                break;
            }
    }

    if(flag == 0) {
        printf("it is a palindrome");
        
    }else{
        printf("it is not a palindrome");
    }

    return EXIT_SUCCESS;
}