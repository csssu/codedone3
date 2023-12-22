/*
Language: cpp
ID: 61975
QLink: https://quera.org/course/assignments/61975/problems
Author: @Amirkhaskar
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int numRabbits(vector<int> &answers)
{
    unordered_map<int, int> rabbit;
    int sum = 0;
    for (int i = 0; i < answers.size(); i++)
    {
        if (rabbit[answers[i]] == 0)
        {
            sum += (answers[i] + 1);
            rabbit[answers[i]] = answers[i];
        }
        else
        {
            rabbit[answers[i]]--;
        }
    }
    return sum;
}

int main()
{
    vector<int> x;
    int num;
    while (cin >> num)
    {
        x.push_back(num);
    }
    cout << numRabbits(x) << endl;
    return 0;
}
