/*
Language: java
ID: 61067
QLink: https://quera.org/course/assignments/61067/problems
Author: @Amirkhaskar
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long num = scanner.nextLong();
        System.out.println(fitsPattern(num));
    }

    static String fitsPattern(long num) {
        String numStr = Long.toString(num);
        int lenNum = numStr.length();

        if (lenNum % 2 == 0) {
            int half = lenNum / 2;
            int firstHalf = Integer.parseInt(numStr.substring(0, half));
            int secondHalf = Integer.parseInt(numStr.substring(half));

            long sumNumbers = 0;
            for (int i = firstHalf; i <= secondHalf; i++) {
                sumNumbers += i;
            }

            if (sumNumbers == num) {
                return "YES!";
            } else {
                return "NO!";
            }
        } else {
            return "NO!";
        }
    }
}