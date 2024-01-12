# Language: python
# ID: 63386
# QLink: https://quera.org/course/assignments/63386/problems
# Author: @Amirkhaskar


def maxProfit(k, prices):
    n = len(prices)

    if k >= n // 2:
        return sum(max(prices[i + 1] - prices[i], 0) for i in range(n - 1))

    dp = [[0] * n for _ in range(k + 1)]

    for i in range(1, k + 1):
        max_diff = -prices[0]
        for j in range(1, n):
            dp[i][j] = max(dp[i][j - 1], prices[j] + max_diff)
            max_diff = max(max_diff, dp[i - 1][j] - prices[j])

    return dp[k][n - 1]

# Test
k = int(input())
prices = list(map(int, input().split()))

result = maxProfit(k, prices)
print(result)
