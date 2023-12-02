/*
Language: c#
ID: 60572
QLink: https://quera.org/course/assignments/60572/problems
Author: @Amirkhaskar
*/

using System;
using System.Collections.Generic;

public class Program {
    public static int RomanToInt(string s) {
        Dictionary<char, int> romanDict = new Dictionary<char, int>() {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        int prevValue = 0;
        
        foreach (char c in s) {
            int currValue = romanDict[c];
            result += currValue;
            
            if (prevValue < currValue) {
                result -= 2 * prevValue;
            }
            
            prevValue = currValue;
        }
        
        return result;
    }
    
    public static void Main(string[] args) {
        string n = Console.ReadLine();
        Console.WriteLine(RomanToInt(n));
    }
}
