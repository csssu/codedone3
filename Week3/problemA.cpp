/*
Language: cpp
ID: 61489
QLink: https://quera.org/course/assignments/61489/problems
Author: @Amirkhaskar
*/
#include <iostream>
using namespace std;

int main() {
    // Input coordinates for the two flies
    int x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    // Check if the flies see each other
    bool on_same_face = (x1 == x2) || (y1 == y2) || (z1 == z2);
    // If the flies are on the same face in any direction, they see each other
    if (on_same_face) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
 