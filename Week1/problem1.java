/*
Language: Java
ID: 60572
QLink: https://quera.org/course/assignments/60572/problems
Author: @Amirkhaskar
*/


import java.util.*;

public class RomanToInt {
    public static int romanToInt(String s) {
        Map<Character, Integer> romanDict = new HashMap<>();
        romanDict.put('I', 1);
        romanDict.put('V', 5);
        romanDict.put('X', 10);
        romanDict.put('L', 50);
        romanDict.put('C', 100);
        romanDict.put('D', 500);
        romanDict.put('M', 1000);
        
        int result = 0;
        int prevValue = 0;
        
        for (char c : s.toCharArray()) {
            int currValue = romanDict.get(c);
            result += currValue;
            
            if (prevValue < currValue) {
                result -= 2 * prevValue;
            }
            
            prevValue = currValue;
        }
        
        return result;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String n = scanner.nextLine();
        System.out.println(romanToInt(n));
        scanner.close();
    }
}
