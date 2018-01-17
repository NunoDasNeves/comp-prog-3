#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main() {
    int H, U, D, F;
    while (scanf("%d %d %d %d", &H, &U, &D, &F), H) {
        double height, fup, up, down, fatigue;
        height = H;
        up = fup = U;
        down = D;
        fatigue = up*(((double)F)/100);
        double curr = 0;
        int day = 0;
        while (curr >= 0 && curr <= height) {
            ++day;
            curr += up;
            up -= fatigue;
            if (up < 0) up = 0;
            if (curr > height) break;
            curr -= down;
        }
        printf("%s on day %d\n", (curr < 0 ? "failure" : "success"), day);
    }
}
