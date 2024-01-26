/*
Language: csharp
ID: 63992
QLink: https://quera.org/course/assignments/63992/problems
Author: @Amirkhaskar
*/
using System;

class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            string n = Console.ReadLine();
            string s = Console.ReadLine();

            while (s.Contains("()"))
            {
                s = s.Replace("()", "");
            }

            Console.WriteLine(s.Length / 2);
        }
    }
}
