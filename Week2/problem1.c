/*
Language: c
ID: 61067
QLink: https://quera.org/course/assignments/61067/problems
Author: @Amirkhaskar
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long num, sum = 0;
    scanf("%lld", &num);

    long long n = num;
    long long originN = num;
    int len = 0;
    while (n != 0)
    {
        n /= 10;
        len++;
    }

    if (len % 2 == 0)
    {
        long long half = len / 2;
        long long firstHalf = num / (long long)pow(10, half);

        long long secondHalfH = 0;
        for (int i = 0; i < half; i++)
        {
            secondHalfH = secondHalfH * 10 + (num % 10);
            num /= 10;
        }

        long long secondHalf = 0;
        for (int i = 0; i < half; i++)
        {
            secondHalf = secondHalf * 10 + (secondHalfH % 10);
            secondHalfH /= 10;
        }

        for (long long i = firstHalf; i <= secondHalf; i++)
        {
            sum += i;
        }

        if (sum == originN)
        {
            printf("YES!\n");
        }
        else
        {
            printf("NO!\n");
        }
    }
    else
    {
        printf("NO!\n");
    }

    return 0;
}
