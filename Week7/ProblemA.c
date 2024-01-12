/*
Language: c
ID: 63386
QLink: https://quera.org/course/assignments/63386/problems
Author: @Amirkhaskar
*/

#include <stdio.h>
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define MAX 1000

int maxProfit(int prices[], int length, int k) {
    int n = length;
    int profit[MAX][MAX];
    for (int i = 0; i <= k; i++) {
        profit[i][0] = 0;
    }
    for (int i = 0; i <= n; i++) {
        profit[0][i] = 0;
    }
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j < n; j++) {
            int currMax = 0;
            for (int day = 0; day < j; day++) {
                currMax = max(currMax, prices[j] - prices[day] + profit[i - 1][day]);
            }
            profit[i][j] = max(profit[i][j - 1], currMax);
        }
    }
    return profit[k][n - 1];
}

int main() {
    int k;
    scanf("%d", &k);
    int num=0;
    int i=0;
    int x[1000];
    while (scanf("%d", &num) == 1) {
        x[i] = num; 
        i++; 
    }
    printf("%d", maxProfit( x,i,k ));
    return 0;
}
