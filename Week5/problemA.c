/*
Language: c
ID: 62414
QLink: https://quera.org/course/assignments/62414/problems
Author: @Amirkhaskar
*/

#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

void findFareySequence(int n, int k, int *numerator, int *denominator)
{
    int x1 = 0, y1 = 1, x2 = 1, y2 = n;
    while (k != 1)
    {
        int m = (n + y1) / y2;
        int x3 = m * x2 - x1;
        int y3 = m * y2 - y1;
        x1 = x2;
        y1 = y2;
        x2 = x3;
        y2 = y3;
        k--;
    }

    *numerator = x2;
    *denominator = y2;
    int gcdValue = gcd(*numerator, *denominator);
    *numerator /= gcdValue;
    *denominator /= gcdValue;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int numerator, denominator;
    if (k == 1)
    {
        numerator = 0;
        denominator = 1;
    }
    else
    {
        findFareySequence(n, k - 1, &numerator, &denominator);
    }
    printf("%d,%d", numerator, denominator);

    return 0;
}
