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

int main(){
    int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    // Two ptrs int i and int j
    int i =0;
    int j =1;
    while (j<n){
        if (arr[j] != 0){
            swap(&arr[i],&arr[j]);
            i++;     
        }
            j++;
    }
    printarr(arr,n);
    return 0;

}