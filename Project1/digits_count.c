#include <stdio.h>
int digits_count() 
{
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf_s("%lld", &n);

    // iterate until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    while (n != 0) 
    {
        n /= 10;     // n = n/10
        ++count;
    }

    printf("Number of digits: %d", count);
}