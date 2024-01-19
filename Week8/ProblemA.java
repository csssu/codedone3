/*
Language: Java
ID: 63659
QLink: https://quera.org/course/assignments/63659/problems
Author: @Amirkhaskar
*/

import java.util.Scanner;

public class Main {

    static int getDivisors(int n, int[] divisors) {
        int size = 0;
        divisors[size++] = 1;
        if (n != 1) {
            divisors[size++] = n;
        }
        for (int i = 2; i <= (int) Math.sqrt(n); ++i) {
            if (n % i == 0) {
                divisors[size++] = i;
                if (i != n / i) {
                    divisors[size++] = n / i;
                }
            }
        }
        return size;
    }

    static boolean canPartition(int[] divisors, int size, int totalSum) {
        boolean[] dp = new boolean[totalSum + 1];
        for (int i = 0; i <= totalSum; ++i) {
            dp[i] = false;
        }
        dp[0] = true;

        for (int i = 0; i < size; ++i) {
            for (int j = totalSum; j >= divisors[i]; --j) {
                if (dp[j - divisors[i]]) {
                    dp[j] = true;
                }
            }
        }
        return dp[totalSum];
    }

    static boolean isZumkeller(int n) {
        int[] divisors = new int[1000];
        int totalDivisors = getDivisors(n, divisors);
        int totalSum = 0;
        for (int i = 0; i < totalDivisors; ++i) {
            totalSum += divisors[i];
        }
        if (totalSum % 2 != 0) {
            return false;
        }
        return canPartition(divisors, totalDivisors, totalSum / 2);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        boolean result = isZumkeller(n);
        System.out.println(result ? "Zumkeller!" : "Not Zumkeller!");
    }
}