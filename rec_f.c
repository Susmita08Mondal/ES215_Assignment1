#include<stdio.h>
#include<time.h>

#define BILLION 1000000000.0;

long double find_fact(int n)
{
    if(n==0)
        return 1;
        
    else
    return(n*find_fact(n-1));
}

int main()
{
    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);
    int i;
    long double fact;
    for(i=1;i<=100;i++)
    {
        fact=find_fact(i);
        printf("\nFactorial of %d is: %Lf",i,fact);
    }
    clock_gettime(CLOCK_REALTIME, &end);
    double time_spent = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / BILLION;
    printf("\nTime Elapsed is %f Seconds\n", time_spent);
    return 0;
}