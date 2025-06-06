#include <stdio.h>
#include <stdlib.h>

void getArray();
void displayArray();
int main (void) {
    int arr[100], size = 3;

    getArray(arr, size);
    displayArray(arr, size);

    return EXIT_SUCCESS;
}

void getArray(int arr[], int size) {
    int i;
    printf("enter array");
    for ( i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
}

void displayArray(int arr[], int size) {
    int i;
    for ( i = 0; i < size; i++){
        printf("%d",arr[i]);
    }
}