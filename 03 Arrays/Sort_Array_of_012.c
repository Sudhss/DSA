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
    

    
    printarr(arr,n);
    return 0;

}