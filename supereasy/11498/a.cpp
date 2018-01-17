#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int K;
    while(scanf("%d\n", &K) != EOF) {
        int N, M;
        cin >> N >> M;
        int x, y;
        for (int k = 0; k < K; ++k) {
            cin >> x >> y;
            if (x == N || y == M) {
                cout << "divisa" << endl;
                continue;
            }
            if (y > M) cout << "N";
            else cout << "S";
            if (x > N) cout << "E" << endl;
            else cout << "O" << endl;
        }
    }
}
