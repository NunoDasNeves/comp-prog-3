#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main() {
    int n, p;
    char buf[100];
    char name[100];
    long long rfp = 1;
    bool first = true;
    while (scanf("%d %d\n", &n, &p), (n && p)) {
        if (first) {
            first = false;
        } else {
            printf("\n");
        }
        for (int i = 0; i < n; ++i) {
            fgets(buf, 99, stdin);
        }
        double min = INFINITY;
        int max = -1;
        for (int i = 0; i < p; ++i) {
            fgets(buf, 99, stdin);
            buf[strlen(buf)-1] = 0; // remove newline
            double d;
            int r;
            scanf("%lf %d\n", &d, &r);
            if ((r > max) || (r == max && d < min)) {
                max = r;
                min = d;
                strcpy(name, buf);
            }

            for (int i = 0; i < r; ++i) fgets(buf, 99, stdin);
        }
        printf("RFP #%lld\n%s\n", rfp, name);
        ++rfp;
    }
}
