#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<map>
using namespace std;

typedef pair<int,int> pr;

int main() {

    map<string, string> beats = {
        {"rock", "scissors"},
        {"scissors", "paper"},
        {"paper", "rock"}
    };

    int n, k;
    bool first = true;
    while (scanf("%d %d\n", &n, &k) == 2) {
        if (!first) cout << endl;
        first = false;
        vector<pr> ps(n+1);
        for (int i = 1; i < ps.size(); ++i) ps[i] = pr(0,0);
        for (int i = 0; i < k*n*(n-1)/2; ++i) {
            int p1, p2;
            string s1, s2;
            cin >> p1 >> s1 >> p2 >> s2;
            if (s1 == s2) continue;
            if (beats[s1] == s2) {
                ps[p1].first++;
                ps[p2].second++;
            } else {
                ps[p2].first++;
                ps[p1].second++;
            }
        }
        for (int i = 1; i < ps.size(); ++i) {
            if ((ps[i].first + ps[i].second) == 0)
                printf("-\n");
            else
                printf("%.3lf\n", (double)ps[i].first/(double)(ps[i].first+ps[i].second));
        }
    }

}
