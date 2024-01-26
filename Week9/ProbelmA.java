/*
Language: java
ID: 63659
QLink: https://quera.org/course/assignments/63992/problems
Author: @Amirkhaskar
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < t; i++) {
            String n = scanner.nextLine();
            String s = scanner.nextLine();

            while (s.contains("()")) {
                s = s.replace("()", "");
            }

            System.out.println(s.length() / 2);
        }
    }
}
