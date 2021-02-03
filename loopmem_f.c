#include<stdio.h>
#include<time.h>

#define BILLION 1000000000.0;

int main()
{
    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);

    long double ans[100];
    ans[0]=1;

    int k;
    for(k=1;k<100;k++)
    {
        ans[k]=(k+1)*ans[k-1];
    }

    int i;
    for(i=0;i<100;i++)
    {
        printf("\nThe Factorial of %d is %Lf",i+1,ans[i]);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    double time_spent = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / BILLION;
    printf("\nTime Elapsed is %f Seconds\n", time_spent);
}