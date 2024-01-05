/*
Language: java
ID: 62944
QLink: https://quera.org/course/assignments/62944/problems
Author: @Amirkhaskar
*/




import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        for (int testCase = 0; testCase < t; testCase++) {
            int n = scanner.nextInt();
            String s = scanner.next();

            Map<String, Integer> used = new HashMap<>();
            used.put("0,0", 0);

            Map<Character, int[]> c = new HashMap<>();
            c.put('L', new int[]{0, -1});
            c.put('R', new int[]{0, 1});
            c.put('U', new int[]{-1, 0});
            c.put('D', new int[]{1, 0});

            int x = 0, y = 0;
            int l = -1, r = n;

            for (int i = 0; i < n; i++) {
                x += c.get(s.charAt(i))[0];
                y += c.get(s.charAt(i))[1];
                String currentPos = x + "," + y;

                if (used.containsKey(currentPos)) {
                    int startPos = used.get(currentPos);
                    if (i - startPos + 1 < r - l + 1) {
                        l = startPos;
                        r = i;
                    }
                }
                used.put(currentPos, i + 1);
            }

            if (l != -1) {
                System.out.println((l + 1) + " " + (r + 1));
            } else {
                System.out.println(l);
            }
        }
    }
}