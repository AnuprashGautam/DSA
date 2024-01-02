// There are two ways to improve the Linear Search: a)Transposition b)Move to Front/Head
#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
};

void swap(int* a, int* b) // Transposition method
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_to_head(int* a, int* array[]) // Move to Head method
{
    int temp;
    temp = *a;
    *a = *array[0];
    *array[0] = temp;
}

int main()
{
    int key;
    struct Array arr;
    arr.A = (int *)malloc(8 * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    printf("Enter the element you want to find:");
    scanf("%d", &key);
    for (int i = 0; i < 8; i++)
    {
        if (key ==arr.A[i])
        {
            printf("Location of the searched element is:%d\n", i);
            swap(&arr.A[i],&arr.A[i+1]);                            // Transposition method
            //swap_to_head(&arr.A[i],&arr.A);                           // Move to Head Method
            break;
        }
    }
    printf("Printing the elements:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", arr.A[i]);
    }
    
    free(arr.A);
    return 0;
}