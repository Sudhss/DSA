#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarr(int arr[],int n){
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0;i<n;i++){
        if (arr[i] >0 && arr[i+1] < 0){
            swap(&arr[i],&arr[i+1]);
        }
    }
    printarr(arr,n);
    return 0;
}
