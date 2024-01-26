/*
Language: c
ID: 63992
QLink: https://quera.org/course/assignments/63992/problems
Author: @Amirkhaskar
*/

#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    char c[n];
    scanf("%s", c);
    int i, count1 = 0, count2 = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        if (c[i] == '(')
        {
            count1++;
        }
        else if (c[i] == ')')
        {
            count2++;
        }
        if (count2 > count1)
        {
            count++;
            count2 = count1;
        }
    }
    printf("%d", count);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
