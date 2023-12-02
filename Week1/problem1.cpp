/*
Language: c++
ID: 60572
QLink: https://quera.org/course/assignments/60572/problems
Author: @Amirkhaskar
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman_dict = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int prev_value = 0;
    
    for (char c : s) {
        int curr_value = roman_dict[c];
        result += curr_value;
        
        if (prev_value < curr_value) {
            result -= 2 * prev_value;
        }
        
        prev_value = curr_value;
    }
    
    return result;
}

int main() {
    string n;
    cin >> n;
    cout << romanToInt(n) << endl;
    return 0;
}
