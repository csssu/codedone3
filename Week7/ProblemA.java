/*
Language: java
ID: 63386
QLink: https://quera.org/course/assignments/63386/problems
Author: @Amirkhaskar
*/
import java.util.Scanner;


public class Main
{
  public static int maxProfit (int k, int[]prices)
  {
    int len = prices.length;
    if (k >= len / 2)
        return quickSolve (prices);

    int[][] t = new int[k + 1][len];
    for (int i = 1; i <= k; i++)
      {
	int tmpMax = -prices[0];
	for (int j = 1; j < len; j++)
	  {
	    t[i][j] = Math.max (t[i][j - 1], prices[j] + tmpMax);
	    tmpMax = Math.max (tmpMax, t[i - 1][j - 1] - prices[j]);
	  }
      }
    return t[k][len - 1];
  }


  private static int quickSolve (int[]prices)
  {
    int len = prices.length, profit = 0;
    for (int i = 1; i < len; i++)
      // as long as there is a price gap, we gain a profit.
      if (prices[i] > prices[i - 1])
	profit += prices[i] - prices[i - 1];
    return profit;
  }

 
  public static void main (String[]args)
  {
        Scanner scanner = new Scanner(System.in);

        // Read k in one line
        int k = scanner.nextInt();
        scanner.nextLine(); // Move to the next line

        // Read array of prices as space-separated values
        String[] pricesStr = scanner.nextLine().split(" ");
        int[] prices = new int[pricesStr.length];

        // Convert string array to int array
        for (int i = 0; i < pricesStr.length; i++) {
            prices[i] = Integer.parseInt(pricesStr[i]);
        }

        // Calculate and print the maximum profit
        int maxProfit = maxProfit(k, prices);
        System.out.println(maxProfit);
  }


}
