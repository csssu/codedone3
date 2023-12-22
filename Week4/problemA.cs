/*
Language: csharp
ID: 61975
QLink: https://quera.org/course/assignments/61975/problems
Author: @Amirkhaskar
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;


public class Program
{
    public static void Main()
    {
        String answers = Console.ReadLine();
        int sum = 0;
        int[] tmp = new int[1000];

        String[] spearator = { " " };
        String[] answersArray = answers.Split(spearator, 3,
               StringSplitOptions.RemoveEmptyEntries);

        for (int i = 0; i < (answersArray.Length); i++)
        {

            int rab = int.Parse(answersArray[i]);
            if (tmp[rab] > 0)
            {
                tmp[rab]--;
            }
            else
            {
                tmp[rab] = rab;
                sum += rab + 1;
            }

        }

        Console.WriteLine(sum);
    }
}



