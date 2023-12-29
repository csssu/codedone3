/*
Language: csharp
ID: 62414
QLink: https://quera.org/course/assignments/62414/problems
Author: @Amirkhaskar
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

public static class FareySequence
{
    public static void Main()
    {
        String input = Console.ReadLine();

        String[] spearator = { " " };
        String[] inputArray = input.Split(spearator, 2, StringSplitOptions.RemoveEmptyEntries);
        int i = 1;
        int a = 0;
        int b = 1;
        int c = 1;
        int d = int.Parse(inputArray[0]);
        if (int.Parse(inputArray[1]) == 1)
        {
            Console.WriteLine("0,1");
        }
        else
        {
            while (c <= int.Parse(inputArray[0]))
            {
                i++;
                int k = (int.Parse(inputArray[0]) + b) / d;
                int aa = a;
                int bb = b;
                a = c;
                b = d;
                c = k * c - aa;
                d = k * d - bb;
                if (int.Parse(inputArray[1]) == i)
                {
                    Console.WriteLine($"{a},{b}");
                }


            }
        }
    }

}