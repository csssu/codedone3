/*
Language: csharp
ID: 61489
QLink: https://quera.org/course/assignments/61489/problems
Author: @Amirkhaskar
*/

using System;

class Program
{
    static void Main(string[] args)
    {
        // Input coordinates for the two flies
        string[] input = Console.ReadLine().Split();
        int x1 = int.Parse(input[0]);
        int y1 = int.Parse(input[1]);
        int z1 = int.Parse(input[2]);
        int x2 = int.Parse(input[3]);
        int y2 = int.Parse(input[4]);
        int z2 = int.Parse(input[5]);

        // Check if the flies see each other
        if (x1 == x2 || y1 == y2 || z1 == z2)
        {
            Console.WriteLine("YES");
        }
        else
        {
            Console.WriteLine("NO");
        }
    }
}
