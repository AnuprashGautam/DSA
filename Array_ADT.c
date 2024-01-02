// Making an variable sized array.
#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("Printing the stored elements:\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}

int main()
{
    struct Array arr;
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    if (arr.A == NULL)
    {
        printf("Memory allocation failed. Exiting...");
        return -1;
    }

    printf("How many numbers are there?: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;

    Display(arr);

    free(arr.A);

    return 0;
}
