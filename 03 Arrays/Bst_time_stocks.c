#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if (a>b) return a;
    return b;
}
int min(int a,int b){
    if (a<b) return a;
    return b;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini = arr[0];
    int maxx = 0;
    int curr = 0;
    for (int i = 1;i<n;i++){
        curr = arr[i] - mini;
        maxx = max(curr,maxx);
        mini = min(arr[i],mini);
    }

    printf("Max profit is %d\n",maxx);

    return 0;
}