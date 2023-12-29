/*
Language: java
ID: 62414
QLink: https://quera.org/course/assignments/62414/problems
Author: @Amirkhaskar
*/

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] result = fareySequence(n, k);

        System.out.println(result[0] + "," + result[1]);
    }

    public static int[] fareySequence(int n, int k) {
        int a = 0, b = 1, c = 1, d = n;

        for (int i = 0; i < k - 1; i++) {
            int temp = (n + b) / d;
            int aa = a, bb = b;
            a = c;
            b = d;
            c = temp * c - aa;
            d = temp * d - bb;
        }

        return new int[]{a, b};
    }
}