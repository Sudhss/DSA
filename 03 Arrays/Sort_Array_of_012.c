// Dutch flag Algorithm
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {

        if (arr[mid] == 0)
        {
            swap(&arr[low], &arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(&arr[mid], &arr[high]);
            high--;
        }
        else
        {
            printf("Invalid Array : Contains numbers apart from 0, 1, 2\n Exit code 1");
            return -1;
        }
    }
    printarr(arr, n);
    return 0;
}