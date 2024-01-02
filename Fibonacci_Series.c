/////////////////////////////////Iterative Approach/////////////////////////////////////////

// #include<stdio.h>

int fib(int n)
{
    int t0=0,t1=1,s=0,i;
    if(n<=1)
    {
        return n;
    }
    for (i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int main()
{
    printf("%d",fib(10));
    return 0;
}

//////////////////////////////////////////////Recursive Approach////////////////////////////////

#include<stdio.h>

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-2)+fib(n-1);
}

int main()
{
    printf("%d",fib(10));
    return 0;
}

//////////////////////////////////////////////////Recursive Appproach Memorization ///////////////////////////////

#include<stdio.h>
int F[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int fib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    if (F[n-2]==-1)
    {
        F[n-2]=fib(n-2);
    }
    if (F[n-1]==-1)
    {
        F[n-1]=fib(n-1);
    }
    return F[n-2]+F[n-1];
}

int main()
{
    printf("%d",fib(10));
    return 0;
}