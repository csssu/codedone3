/*
Language: c
ID: 61489
QLink: https://quera.org/course/assignments/61489/problems
Author: @Amirkhaskar
*/
#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, z1, z2;
    scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
    int onthesameface = (x1 == x2) || (y1 == y2) || (z1 == z2);
    onthesameface ? printf("YES") : printf("NO");
    return 0;
}
