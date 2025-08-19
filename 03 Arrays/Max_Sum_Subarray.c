//Kadane Algo
#include <stdio.h>
#include <limits.h>
int maxx(int a, int b){
    if(a>b)return a;
    return b;
}
int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0;i<n;i++){
        sum+=arr[i];
        max = maxx(max,sum);
        if (sum<0){
            sum = 0;
        }
    }
    printf("Max Sum is %d\n",max);
    return 0;
    
}
