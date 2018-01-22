#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<algorithm>

using namespace std;

typedef pair<int,int> prii;

int main() {
    int B, S;
    while (scanf("%d %d\n", &S, &B), S && B) {
        //printf("Test case: %d %d\n", S, B);
        vector<prii> intervals(S+2);
        intervals[1] = prii(0,2);
        intervals[S+1] = prii(S,0);
        for (int i = 2; i < S; ++i) intervals[i] = prii(i-1, i+1);
        int L, R;
        while (B--) {
            cin >> L >> R;
            //printf("L %d R %d\n", L, R);
            int Lb = intervals[L].first;
            int Rb = intervals[R].second%(S+1);
            //printf("Lb %d Rb %d\n", Lb, Rb);
            intervals[Rb].first = Lb;
            intervals[Lb].second = Rb;
            if (Lb) cout << Lb;
            else cout << "*";
            cout << " ";
            if (Rb) cout << Rb;
            else cout << "*";
            cout << endl;
        }
        cout << "-" << endl;
    }
}
