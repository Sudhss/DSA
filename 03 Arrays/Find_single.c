#include <stdio.h>

int main()
{
    int arr[] = {1,1,2,3,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int XOR = 0;
    for (int i=0;i<n;i++){
        XOR = XOR^arr[i]; 
    }
    printf("%d ",XOR);
    return 0;
}