/*
Language: c
ID: 60572
QLink: https://quera.org/course/assignments/60572/problems
Author: @Amirkhaskar
*/

#include <stdio.h>

int romanToInt(char *s) {
    int roman_dict[26] = {0};
    roman_dict['I' - 'A'] = 1;
    roman_dict['V' - 'A'] = 5;
    roman_dict['X' - 'A'] = 10;
    roman_dict['L' - 'A'] = 50;
    roman_dict['C' - 'A'] = 100;
    roman_dict['D' - 'A'] = 500;
    roman_dict['M' - 'A'] = 1000;

    int result = 0;
    int prev_value = 0;

    for (; *s != '\0'; s++) {
        int curr_value = roman_dict[*s - 'A'];
        result += curr_value;

        if (prev_value < curr_value) {
            result -= 2 * prev_value;
        }

        prev_value = curr_value;
    }

    return result;
}

int main() {
    char n[20];
    scanf("%s", n);
    printf("%d\n", romanToInt(n));
    return 0;
}
