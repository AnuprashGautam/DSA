/////////////////////////////////////////Question 1////////////////////////////////////

#include<stdio.h>

void foo(int n, int sum)
{
    int k=0,j=0;
    if(n==0)
        return;
    k=n%10;
    j=n/10;
    sum=sum+k;
    foo(j,sum);
    printf("%d",k);
}

int main()
{
    int a=2048, sum=0;
    foo(a,sum);
    printf("%d",sum);
    return 0;
}

///////////////////////Question 2///////////////////////////////////////////////////

#include <stdio.h>

int f(int *x, int c) {
    c = c - 1;
    if (c == 0) {
        return 1;
    }
    (*x) = (*x) + 1;
    return f(x, c) * (*x);
}

int main() {
    int p = 5;
    printf("%d", f(&p, p));
    return 0;
}

//////////////////////////////////Question 3////////////////////////////////////////////////

#include<stdio.h>

int fun(int n)
{
    int x=1,k;
    if(n==1)
        return x;
    for(k=1;k<n;++k)
    {
        x+=fun(k)*fun(n-k);
    }
    return x;
}

int main()
{
    printf("%d",fun(5));
    return 0;
}

////////////////////////////////////Question 4////////////////////////////////////////////////

#include<stdio.h>

int count(int n)
{
    static int d=1;
    printf("%d",n);
    printf("%d",d);
    d++;
    if(n>1)
        count(n-1);
    printf("%d",d);
}

int main()
{
    count(3);
    return 0;
}

