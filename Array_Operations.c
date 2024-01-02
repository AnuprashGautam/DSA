// Operations on Array.
#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int Size;
    int Length;
};

// Operration to enter the values in array.
void Enter(struct Array *a)
{
    printf("Enter the number of elements:");
    scanf("%d", &a->Length);
    printf("Entering the elements in the array:\n");
    for (int i = 0; i < a->Length; i++)
    {
        scanf(" %d", &a->A[i]);
    }
}

// Operation to display the elements of array.
void Display(struct Array *a)
{
    printf("Displaying the array elements:\n");
    for (int i = 0; i < a->Length; i++)
    {
        printf("%d\n", a->A[i]);
    }
}

// Operation to insert the element at the required location(i.e. Index).
void Insert(struct Array *a)
{
    int new_element, loc;
    printf("Enter the new element:");
    scanf("%d", &new_element);
    printf("Enter the location i.e. index:");
    scanf("%d", &loc);
    if (loc >= a->Size)
    {
        printf("The element cannot be inserted at the mentioned location.");
    }
    else
    {
        if (a->Length >= a->Size)
        {
            printf("Array is full, cannot insert more elements.");
            return;
        }
        for (int i = a->Length - 1; i >= loc; i--) // Shifting the array elements to the right
        {
            a->A[i + 1] = a->A[i];
        }
        a->A[loc] = new_element;
        a->Length++;
    }
}

// Operation to delete the element at a location.
void Delete(struct Array *a)
{
    int del_index;
    int del_element;
    printf("Enter the location i.e. index:");
    scanf("%d", &del_index);
    if (del_index >= a->Length)
    {
        printf("Mentioned index doesn't contain any element.");
    }
    else // Shifting elements left side.
    {
        del_element = a->A[del_index];
        for (int i = del_index; i < a->Length; i++)
        {
            a->A[i] = a->A[i + 1];
        }
    }
    a->Length--;
    printf("Deleted element is:%d", del_element);
}

// Finding element by using Linear Search.
void Linear_Search(struct Array *a)
{
    int key;
    printf("Enter the element you want to search:");
    scanf("%d", &key);
    for (int i = 0; i < a->Length; i++)
    {
        if (key == a->A[i])
        {
            printf("Location of the searched element is:%d\n", i);
        }
        else
        {
            printf("Element was not found.");
        }
    }
}

// Finding element by using Binary Search.
void Binary_Search(struct Array *a)
{
    int low = 0, high = (a->Length) - 1, mid, key;
    printf("Enter the element you want to search:");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a->A[mid])
        {
            printf("Location of the searched element is:%d\n", mid);
            break;
        }
        else if (key < a->A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (low > high)
    {
        printf("Array does not contain the searched element.\n");
    }
}

// Operation to access the element at the index.
void Get(struct Array a)
{
    int index;
    printf("Enter the index:");
    scanf("%d", &index);
    if (index >= 0 && index < a.Length)
    {
        printf("The element at the index %d is:%d\n", index, a.A[index]);
    }
    else
    {
        printf("Enter the valid index.\n");
    }
}

// Operation to change the value of an element.
void Set(struct Array *a)
{
    int idx, value;
    printf("Enter the index:");
    scanf("%d", &idx);
    printf("Enter the value:");
    scanf("%d", &value);
    if (idx >= 0 && idx < a->Length)
    {
        a->A[idx] = value;
        printf("Value changed.\n");
    }
    else
    {
        printf("Invalid index.\n");
    }
}

//Operation to determine the maximum element of array.
void Max(struct Array a)
{
    int max=a.A[0];
    for(int i=1;i<a.Length;i++)
    {
        if(a.A[i]>max)
        {
            max=a.A[i];
        }
    }
    printf("The maximum element of the array is:%d\n",max);
}

//Operation to determine the minimum element of array.
void Min(struct Array a)
{
    int min=a.A[0];
    for(int i=1;i<a.Length;i++)
    {
        if(a.A[i]<min)
        {
            min=a.A[i];
        }
    }
    printf("The minimum element of the array is:%d\n",min);
}

//Operation to determine the sum of elements.
void Sum(struct Array a)
{
    int total=0;
    for(int i=0;i<a.Length;i++)
    {
        total+=a.A[i];
    }
    printf("The sum of the array elements is:%d\n",total);
}

//Operation to determine the average of elements.
void Avg(struct Array a)
{
    int total=0, avg;
    for(int i=0;i<a.Length;i++)
    {
        total+=a.A[i];
    }
    avg=total/a.Length;
    printf("The sum of the array elements is:%d\n",avg);
}

int main()
{
    struct Array arr;
    printf("Enter the size of array:");
    scanf("%d", &arr.Size);
    arr.A = (int *)malloc(arr.Size * sizeof(int));

    printf("Press -1 to exit the loop.\nPress 1 for entering the data in array.\nPress 2 for displaying the data of array.\nPress 3 for inserting the new elemnt.\nPress 4 for deleting the elemnt.\nPress 5 for linear searching.\nPress 6 for binary searching.\nPress 7 to access the element.\nPress 8 to change the value.\nPress 9 to get maximum element.\nPress 10 to get minimum element.\nPress 11 to get sum of elements.\nPress 12 to get average of numbers.\n");
    int choice = 0;
    while (choice != -1)
    {
        printf("Enter what you want to do:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enter(&arr);
            break;
        case 2:
            Display(&arr);
            break;
        case 3:
            Insert(&arr);
            break;
        case 4:
            Delete(&arr);
            break;
        case 5:
            Linear_Search(&arr);
            break;
        case 6:
            Binary_Search(&arr);
            break;
        case 7:
            Get(arr);
            break;
        case 8:
            Set(&arr);
            break;
        case 9:
            Max(arr);
            break;
        case 10:
            Min(arr);
            break;
        case 11:
            Sum(arr);
            break;
        case 12:
            Avg(arr);
            break;
        default:
            printf("Entered the wrong value. Please retry.\n");
        }
    }

    free(arr.A);
    return 0;
}