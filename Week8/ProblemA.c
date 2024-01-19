/*
Language: c
ID: 63659
QLink: https://quera.org/course/assignments/63659/problems
Author: @Amirkhaskar
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int get_divisors(int n, int *divisors)
{
    int size = 0;
    divisors[size++] = 1;
    if (n != 1)
    {
        divisors[size++] = n;
    }
    for (int i = 2; i <= (int)sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            divisors[size++] = i;
            if (i != n / i)
            {
                divisors[size++] = n / i;
            }
        }
    }
    return size;
}

bool can_partition(int *divisors, int size, int total_sum)
{
    bool dp[total_sum + 1];
    for (int i = 0; i <= total_sum; ++i)
    {
        dp[i] = false;
    }
    dp[0] = true;

    for (int i = 0; i < size; ++i)
    {
        for (int j = total_sum; j >= divisors[i]; --j)
        {
            if (dp[j - divisors[i]])
            {
                dp[j] = true;
            }
        }
    }
    return dp[total_sum];
}

bool is_zumkeller(int n)
{
    int divisors[1000];
    int total_divisors = get_divisors(n, divisors);
    int total_sum = 0;
    for (int i = 0; i < total_divisors; ++i)
    {
        total_sum += divisors[i];
    }
    if (total_sum % 2 != 0)
    {
        return false;
    }
    return can_partition(divisors, total_divisors, total_sum / 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    bool result = is_zumkeller(n);
    printf(result ? "Zumkeller!" : "Not Zumkeller!");
    return 0;
}