/*
Language: csharp
ID: 63386
QLink: https://quera.org/course/assignments/63386/problems
Author: @Amirkhaskar
*/




using System;
 
class GFG {
     
    // Function to find out maximum profit by 
    // buying & selling/ a share atmost k times
    // given stock price of n days
    static int maxProfit(int[] price, int n, int k)
    {
        // table to store results of subproblems
        // profit[t][i] stores maximum profit using atmost
        // t transactions up to day i (including day i)
        int[, ] profit = new int[k + 1, n + 1];
 
        // For day 0, you can't earn money
        // irrespective of how many times you trade
        for (int i = 0; i <= k; i++)
            profit[i, 0] = 0;
 
        // profit is 0 if we don't do any transaction
        // (i.e. k =0)
        for (int j = 0; j <= n; j++)
            profit[0, j] = 0;
 
        // fill the table in bottom-up fashion
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j < n; j++) {
                int max_so_far = 0;
 
                for (int m = 0; m < j; m++)
                max_so_far = Math.Max(max_so_far, price[j] -
                               price[m] + profit[i - 1, m]);
 
                profit[i, j] = Math.Max(profit[i, j - 1], max_so_far);
            }
        }
 
        return profit[k, n - 1];
    }
 
    // Driver code to test above
    public static void Main()
    {
        int k =  Convert.ToInt32(Console.ReadLine());
        string input = Console.ReadLine();
        string[] tokens = input.Split(' ');
        int[] price = Array.ConvertAll(tokens, int.Parse);
        
 
        int n = price.Length;
 
        Console.WriteLine(maxProfit(price, n, k));
    }
}