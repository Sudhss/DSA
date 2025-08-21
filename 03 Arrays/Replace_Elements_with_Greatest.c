#include <stdio.h>
#include <stdlib.h>

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    return 0;
}