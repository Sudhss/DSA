#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
void reverse(int arr[],int n){
    int l = 0;
    int r = n-1;
    while (l<r){
        swap(&arr[l],&arr[r]);
        l++;
        r--;
    }
    
}

int main() {
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxx = INT_MIN;
    int res[n];
    int k=0;
    for (int i = n-1;i>=0;i--){
        if (arr[i] > maxx){
            res[k++] = arr[i];
            maxx = arr[i];
        }
    }
    reverse(arr,k);
    printarr(res,k);
    return 0;
}