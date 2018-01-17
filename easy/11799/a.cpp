#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main() {
    int T, N, curr;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        cin >> N;
        int max = 0;
        for (int i = 0; i < N; ++i) {
            cin >> curr;
            max = max < curr ? curr : max;
        }
        printf("Case %d: %d\n", t, max);
    }
}
