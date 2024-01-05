/*
Language: csharp
ID: 62944
QLink: https://quera.org/course/assignments/62944/problems
Author: @Amirkhaskar
*/



using System;
using System.Collections.Generic;

class MainClass {
    public static void Main (string[] args) {
        int t = Convert.ToInt32(Console.ReadLine());

        for (int testCase = 0; testCase < t; testCase++) {
            int n = Convert.ToInt32(Console.ReadLine());
            string s = Console.ReadLine();

            Dictionary<string, int> used = new Dictionary<string, int>();
            used["0,0"] = 0;

            Dictionary<char, int[]> c = new Dictionary<char, int[]>();
            c['L'] = new int[]{0, -1};
            c['R'] = new int[]{0, 1};
            c['U'] = new int[]{-1, 0};
            c['D'] = new int[]{1, 0};

            int x = 0, y = 0;
            int l = -1, r = n;

            for (int i = 0; i < n; i++) {
                x += c[s[i]][0];
                y += c[s[i]][1];
                string currentPos = x + "," + y;

                if (used.ContainsKey(currentPos)) {
                    int startPos = used[currentPos];
                    if (i - startPos + 1 < r - l + 1) {
                        l = startPos;
                        r = i;
                    }
                }
                used[currentPos] = i + 1;
            }

            if (l != -1) {
                Console.WriteLine((l + 1) + " " + (r + 1));
            } else {
                Console.WriteLine(l);
            }
        }
    }
}
