#include<stdio.h>
#include<time.h>

#define BILLION 1000000000.0;

long double fact(int n)
{
    long double ans=1;
    int k;
    for(k=1;k<=n;k++)
    {
        ans=ans*k;
    }
    return ans;
}

int main()
{
    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);
    int i;
    for(i=1;i<=100;i++)
    {
        printf("\nFactorial of %d is %Lf", i, fact(i));
    }
    clock_gettime(CLOCK_REALTIME, &end);
    double time_spent = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / BILLION;
    printf("\nTime Elapsed is %f Seconds\n", time_spent);
}