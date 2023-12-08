/*
Language: csharp
ID: 61067
QLink: https://quera.org/course/assignments/61067/problems
Author: @Amirkhaskar
*/

using System;

class Program
{
    static string FitsPattern(int num)
    {
        string numStr = num.ToString();
        int lenNum = numStr.Length;

        if (lenNum % 2 == 0)
        {
            int half = lenNum / 2;
            int firstHalf = int.Parse(numStr.Substring(0, half));
            int secondHalf = int.Parse(numStr.Substring(half));

            int sumNumbers = 0;
            for (int i = firstHalf; i <= secondHalf; i++)
            {
                sumNumbers += i;
            }

            if (sumNumbers == num)
            {
                return "YES!";
            }
            else
            {
                return "NO!";
            }
        }
        else
        {
            return "NO!";
        }
    }

    static void Main()
    {
        int num = int.Parse(Console.ReadLine());
        Console.WriteLine(FitsPattern(num));
    }
}
