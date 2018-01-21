#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int n, k;
        cin >> n >> k;
        unsigned a = 0;
        for (int i = 0, p = 1; i < k; ++i) {
            int t = k-p;
            if (t < 0) t = 0;
            else t = (~(t/(p*=2)))&1;
            a |= t<<i;
        }
        cout << a << endl;
    }
}
