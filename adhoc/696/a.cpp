#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main() {
    int n, m, k;
    while(scanf("%d %d", &m, &n), n && m) {
        if (n == 1) k = m;
        else if (m == 1) k = n;
        else if (m == 2) {
            int fs = n/4;
            int ts = n%4;
            if (ts == 3) ts = 2;
            k = fs*4 + 2*ts;
        }
        else if (n == 2) {
            int fs = m/4;
            int ts = m%4;
            if (ts == 3) ts = 2;
            k = fs*4 + 2*ts;
        }
        else if (n+m == 5) k = 4;
        else if (n+m == 4) k = 4;
        else {
            k = (n*m)/2 + (n*m & 1 ? 1 : 0);
        }
        printf ("%d knights may be placed on a %d row %d column board.\n", k, m, n);
    }
    return 0;
}
