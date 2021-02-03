#include<stdio.h>
#include<time.h>

#define BILLION 1000000000.0;

long double fact(int n)
{
    long double ans;
    if(n==1)
       { ans=1;
        printf("\nFactorial of %d is %Lf",n,ans);
        return ans;
       }
    ans=n*fact(n-1);
    printf("\nFactorial of %d is %Lf",n,ans);
    return ans;
}

int main()
{
    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);
    fact(100);
    clock_gettime(CLOCK_REALTIME, &end);
    double time_spent = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / BILLION;
    printf("\nTime Elapsed is %f Seconds\n", time_spent);
}