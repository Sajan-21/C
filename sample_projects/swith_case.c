#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int choice;

    printf("press 1 for one, 2 for two, 3 for three, and 4 for four");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("you are selected ONE");
        break;
    case 2:
        printf("you are selected two");
        break;
    case 3:
        printf("you are selected three");
        break;
    case 4:
        printf("you are selected four");
        break;
    default:
        printf("thats not an option try between 1 to 4");
        break;
    }
}