#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int *arr,int n){
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
        }
}
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int main() {
    int arr[] = {3,4,1,9,56,7,9,12};
    int m = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    int mini = INT_MAX;
    for(int i = 0;i<n-m;i++){
        int curr = arr[i+m-1]-arr[i];
        mini = min(curr,mini);
    }
    printf("%d ",mini);
    return 0;
}