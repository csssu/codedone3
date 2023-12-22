/*
Language: java
ID: 61975
QLink: https://quera.org/course/assignments/61975/problems
Author: @Amirkhaskar
*/
import java.util.*;

public class Main
{

    public static int numRabbits (int[]answers)
    {
        Map < Integer, Integer > m = new HashMap <> ();
        for (int i:answers)
            m.put (i, m.getOrDefault (i, 0) + 1);
        int res = 0;
        for (int i:m.keySet ())
            res += (m.get (i) + i) / (i + 1) * (i + 1);
        return res;
    }

    public static void main (String[]args)
    {
        Scanner myObj = new Scanner (System.in);	// Create a Scanner object

        String answers = myObj.nextLine ();	// Read user input
        String[]answersArray = answers.split (" ");

        int[] numbers = new int[answersArray.length];
        for (int i = 0; i < answersArray.length; i++)
        {
            numbers[i] = Integer.parseInt (answersArray[i]);
        }
        System.out.println (numRabbits (numbers));


    }
}
