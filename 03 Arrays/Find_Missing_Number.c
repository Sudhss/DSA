// #include <stdio.h>

// holy chopped

// int main()
// {
//     int arr[] = {1, 2, 4, 5};
//     int n = 5;
//     // find the missing number in the array, in this case output = 3
//     int flag = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] == i){
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag==0){
//             printf("%d",i);
//             return 0;
//         }
//     }
//     return 0;

// }


// mid ass burger

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int arr[] = {2, 3, 4, 5};
//     int n = 5;

//     int *hash = calloc(n + 1, sizeof(int));
//     for (int i = 0; i < n - 1; i++)
//     {
//         hash[arr[i]] += 1;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (hash[i] == 0)
//         {
//             printf("Missing Value : %d\n", i);
//             return 0;
//         }
//     }
//     printf("No Missing Value!");
//     return 0;
// }



// real juicer
// O(n) time <-> O(1) space
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    // expected sum - sum of arr
    int sum1 = (n*(n+1))/2;
    // int sum2 = 0;

    for (int i=0;i<n-1;i++){
        sum1 -=arr[i];
    }

    printf("Missing Value : %d\n", sum1);
    return 0;
}