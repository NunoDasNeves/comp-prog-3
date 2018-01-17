#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main() {
    int dur, n;
    double payment, loan;
    while(scanf("%d", &dur), dur > 0) {
        cin >> payment >> loan >> n;

        vector<double> dep(dur+1); // month 0-dur inclusive
        int k;
        int k_prev = 0;
        double prev_dep = -1;
        for (int i = 0; i < n; ++i) {
            cin >> k;
            for (int j = k_prev+1; j < k; ++j) dep[j] = prev_dep;
            cin >> prev_dep;
            dep[k] = prev_dep;
            k_prev = k;
        }
        for (int i = k+1; i < dep.size(); ++i) dep[i] = dep[k];

        double value = loan+payment, owed = loan;
        double monthlypay = loan/((double)dur);

        for (int m = 0; m <= dur; ++m) {
            value *= (1.0-dep[m]);
            if (m > 0) owed -= monthlypay;
            //printf("month %d; applied dep of %lf owe %lf value %lf\n", m, dep[m], owed, value);
            if (owed < value) {
                cout << m << (m == 1 ? " month" : " months") << endl;
                break;
            }
        }
    }
}
