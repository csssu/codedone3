/*
Language: c
ID: 62944
QLink: https://quera.org/course/assignments/62944/problems
Author: @Amirkhaskar
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 200000

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[MAX_LEN + 1];
        scanf("%s", s);
        int *used = (int *)calloc((2 * n + 1) * (2 * n + 1), sizeof(int));
        for (int i = 0; i < (2 * n + 1) * (2 * n + 1); i++) used[i] = -1;
        int offset = n;
        int c[128][2];
        c['L'][0] = 0; 
        c['L'][1] = -1;
        c['R'][0] = 0; 
        c['R'][1] = 1;
        c['U'][0] = -1; 
        c['U'][1] = 0;
        c['D'][0] = 1; 
        c['D'][1] = 0;
        int x = 0, y = 0;
        int l = -1, r = n;
        used[(x + offset) * (2 * n + 1) + (y + offset)] = 0;
        for (int i = 0; i < n; i++) {
            x += c[s[i]][0];
            y += c[s[i]][1];
            
            int index = (x + offset) * (2 * n + 1) + (y + offset);
            if (used[index] != -1) {
                if (i - used[index] < r - l) {
                    l = used[index];
                    r = i;
                }
            }
            used[index] = i + 1;
        }
        free(used);
        if (l != -1)
            printf("%d %d\n", l + 1, r + 1);
        else
            printf("%d\n", l);
    }
    
    return 0;
}
