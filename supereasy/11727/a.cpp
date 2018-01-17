#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int s[3];
        cin >> s[0] >> s[1] >> s[2];
        for (int i = 0; i < 3;++i) {
            for (int j = i+1; j < 3; ++j) {
                if (s[j] < s[i]) {
                    int tmp = s[j];
                    s[j] = s[i];
                    s[i] = tmp;
                }
            }
        }
        printf("Case %d: %d\n", t, s[1]);
    }
}
