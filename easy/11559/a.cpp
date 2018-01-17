#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main() {
    int N, B, H, W;
    while (scanf("%d %d %d %d", &N, &B, &H, &W) != EOF) {
        int p, a, min, cost;
        min = B+1;
        for (int h = 0; h < H; ++h) {
            cin >> p;
            for (int b = 0; b < W; ++b) {
                cin >> a;
                if (a >= N) {
                    cost = N*p;
                    min = cost < min ? cost : min;
                }
            }
        }
        if (min > B) cout << "stay home" << endl;
        else cout << min << endl;
    }

}
