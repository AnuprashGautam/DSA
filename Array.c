///////////////////////////////////Accesssing the elements of Array present in Stack/////////////////////////////

#include<stdio.h>
int main()
{
    int Array_Stack[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d\t",Array_Stack[i]);
    }
    return 0;
}

///////////////////////////////////Accesing the elements of Array present in heap/////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* Ptr;
    Ptr=(int *)malloc(5*sizeof(int));
    Ptr[0]=6;
    Ptr[1]=7;
    Ptr[2]=8;
    Ptr[3]=9;
    Ptr[4]=10;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",Ptr[i]);
    }
    return 0;
}

///////////////////////////////Increasing the size of Array (Heap)///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *P;//Old Pointer for old Array
    P = (int *)malloc(5 * sizeof(int));//Size of P is 5
    P[0] = 6;
    P[1] = 7;
    P[2] = 8;
    P[3] = 9;
    P[4] = 10;

    int *Q;//New Pointer for new Array
    Q = (int *)malloc(10 * sizeof(int));//Size of Q is set to the REQUIRED SIZE for new array
    for (int i=0;i<5;i++)//Copying the data from Old array to New array
    {
        Q[i]=P[i];
    }
    free(P);//Freeing pointer P
    P=Q;//Seting Pointer P to new array
    Q=NULL;//Setting Pointer Q NULL

    for (int i=0;i<10;i++)//Printing the array element
    {
        printf("%d\t",P[i]);
    }

    return 0;
}