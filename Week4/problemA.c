/*
Language: c
ID: 61975
QLink: https://quera.org/course/assignments/61975/problems
Author: @Amirkhaskar
*/

#include <stdio.h>

int numRabbits(int *answers, int answersSize)
{
    int rabbit[1000] = {0};
    int sum = 0;
    for (int i = 0; i < answersSize; i++)
    {
        if (rabbit[answers[i]] == 0)
        {
            sum += (answers[i] + 1);
            rabbit[answers[i]] = answers[i];
        }
        else
            rabbit[answers[i]]--;
    }
    return sum;
}
int main()
{
    int x[1000];
    int l;
    for (l = 0; l < 1000; l++)
    {
        x[l] = 0;
    }
    int i = 0;
    int num;
    while (scanf("%d", &num) == 1)
    {
        x[i] = num;
        i++;
    }
    printf("%d", numRabbits(x, i));
}
