/*
Language: csharp
ID: 63659
QLink: https://quera.org/course/assignments/63659/problems
Author: @Amirkhaskar
*/

using System;

class MainClass
{
    static int GetDivisors(int n, int[] divisors)
    {
        int size = 0;
        divisors[size++] = 1;

        if (n != 1)
        {
            divisors[size++] = n;
        }

        for (int i = 2; i <= (int)Math.Sqrt(n); ++i)
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

    static bool CanPartition(int[] divisors, int size, int totalSum)
    {
        bool[] dp = new bool[totalSum + 1];

        for (int i = 0; i <= totalSum; ++i)
        {
            dp[i] = false;
        }

        dp[0] = true;

        for (int i = 0; i < size; ++i)
        {
            for (int j = totalSum; j >= divisors[i]; --j)
            {
                if (dp[j - divisors[i]])
                {
                    dp[j] = true;
                }
            }
        }
        return dp[totalSum];
    }

    static bool IsZumkeller(int n)
    {
        int[] divisors = new int[1000];
        int totalDivisors = GetDivisors(n, divisors);
        int totalSum = 0;

        for (int i = 0; i < totalDivisors; ++i)
        {
            totalSum += divisors[i];
        }

        if (totalSum % 2 != 0)
        {
            return false;
        }

        return CanPartition(divisors, totalDivisors, totalSum / 2);
    }

    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        bool result = IsZumkeller(n);
        Console.WriteLine(result ? "Zumkeller!" : "Not Zumkeller!");
    }
}
