#include <stdio.h>
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {3, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int curr = arr[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == curr)
            count++;
        else
        {
            if (count != 0)
            {
                count--;
            }
            else
            {
                curr = arr[i];
            }
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (curr == arr[i])
            count++;
    }
    if (count > n / 2)
    {
        printf("\nMajority Element is %d\n", curr);
        return 0;
    }
    printf("No Majority Element");
    return 0;
}