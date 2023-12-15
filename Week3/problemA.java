/*
Language: java
ID: 61489
QLink: https://quera.org/course/assignments/61489/problems
Author: @Amirkhaskar
*/


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int x1 = scanner.nextInt();
        int y1 = scanner.nextInt();
        int z1 = scanner.nextInt();
        int x2 = scanner.nextInt();
        int y2 = scanner.nextInt();
        int z2 = scanner.nextInt();

        boolean onSameFace = (x1 == x2) || (y1 == y2) || (z1 == z2);
        if (onSameFace) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
