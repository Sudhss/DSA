#include <stdio.h>
// 4 times O(n2) -> O(4(n^2)) -> O(n2) -> TC
// if M is considered -> O(n2) ifM is not O(1) -> 
int main()
{
    // take input n :
    int n; printf("n = "); scanf("%d", &n);

    // take input in matrix -> space seperated and printing it : O(n2)
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int input; scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");
    printf("Input Matrix : \n");
    // printing the matrix : O(n2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Upper Triangular : \n");
    // upper triangular -> O(n2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i!=j && i<j) printf("0 "); //  when i is less tha j print 0 else print the number
            else printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    printf("Lower Triangular : \n");
    // lower triangular -> O(n2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i!=j && i>j) printf("0 ");
            else printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}