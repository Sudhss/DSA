#include <stdio.h>
int func(int n,int ans){
    if (n==0 || n == 1){
        return ans;
    }
    return func(n-1,ans*n);
    
}
int main(){
    int n = 5;
    int n1 = func(n,1);
    printf("%d",n1);
    return 0;
}
