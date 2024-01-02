//There are 3 ways to initialize the 2D Array

/////////////////////////////////////////////////////////1. Using Simple Approach////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
///////////////////////////////////////////////////////2. Using Pointer////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* B[3];// This array is being created in STACK.

    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    B[3]=(int *)malloc(4*sizeof(int));

    for (int i=0;i<3;i++)//Taking the values
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter %d,%d element:",i+1,j+1);
            scanf("%d",&B[i][j]);
        }

    }
    
    printf("Printing the values stored in 2D array\n");
    for (int i=0;i<3;i++)//Printing the values
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    free(B[0]);
    free(B[1]);
    free(B[2]);
    free(B[3]);
    return 0;
}

///////////////////////////////////////////////////////////3. Using Double Pointers//////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int** C;// This array is being created in HEAP.

    C=(int**)(malloc(3*sizeof(int*)));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
    C[3]=(int *)malloc(4*sizeof(int));

    for (int i=0;i<3;i++)//Taking the values
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter %d,%d element:",i+1,j+1);
            scanf("%d",&C[i][j]);
        }

    }
    
    printf("Printing the values stored in 2D array\n");
    for (int i=0;i<3;i++)//Printing the values
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    free(C[0]);
    free(C[1]);
    free(C[2]);
    free(C[3]);
    return 0;
}