// #include <stdio.h>

// void printarr(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {3, 1, -2, -5, 2, -4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int pos[6], neg[6];
//     int m = 0, k = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0)
//             neg[k++] = arr[i];
//         else
//             pos[m++] = arr[i];
//     }
//     int i = 0, p = 0, q = 0;
//     while (p < m && q < k) {
//         arr[i++] = pos[p++];
//         arr[i++] = neg[q++];
//     }
//     while (p < m) arr[i++] = pos[p++];
//     while (q < k) arr[i++] = neg[q++];

//     printarr(arr, n);
//     return 0;
// }




#include <stdio.h>

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    return 0;
}

