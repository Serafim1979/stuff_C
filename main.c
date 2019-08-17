#include <stdio.h>
#include <stdlib.h>
#include <math.h>
///////////////////////////////////
int find_prime_Num(int limit);
int max(int, int, int);
int fact(int n);
///////////////////////////////////
int main()
{
    int ans;
    printf("Enter a limit of numbers to calculate: \n");
    scanf("%d", &ans);
    printf("\n Number of primes = %d ",find_prime_Num(ans));
    printf("\n Max = %d ", max(12, 4, 7));
    printf("\n Fact = %d ", fact(5));
    return 0;
}
///////////////////////////////////
int find_prime_Num(int limit)
{
    int t, i, count = 0, flag;
    if(limit <= 0);
    else
    {
        printf("1 ");
        count++;
        for(t = 2; t <= limit;t++)
        {
            flag = 1;
            for(i = 2; i * i <= t; i++)
            {
                if(t % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                printf("%d ", t);
                count++;
            }
        }
    }
    return count;
}
/////////////////////////////////////////////////
int max(int a, int b, int c)
{
    int max = 0;
    if(a >= b && a >= c)
        max = a;
    if(b >= a && b >= c)
        max = b;
    if(c >= a && c >= b)
        max = c;
    return max;
}
/////////////////////////////////////////////////
int fact(int n)
{
    if(n < 2)
        return 1;
    else
        return n * fact(n-1);
}
