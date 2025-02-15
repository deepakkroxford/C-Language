#include <stdio.h>
#include<stdlib.h>

 int add(int a, int b)
{
    return a+b;
}
int main()
{
    int arr[] = {1, 2, 4, 5, 5, 6, 6, 7};
    /*
    sizeof(arr) gives the total bytes (e.g., 8 * 4 = 32 bytes for 8 integers).
    sizeof(arr[0]) gives the size of one integer (4 bytes).
    32 / 4 = 8 (Correct number of elements).
    */
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n1; i++)
    {
        sum += arr[i];
    }
    printf("Sum of array elements is: %d", sum);

    int res = add(10,12);
    printf("Result of add function is: %d", res);


    //taking the array input from the user
    int n;
    printf("enter the size of the array");
    scanf("%d", &n);
   int *arr1 = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //calculate the sum
    int sum1 = 0;
    for(int i = 0; i < n; i++)
    {
        sum1 += arr1[i];
    }
    printf("Sum of array elements is: %d", sum1);
}