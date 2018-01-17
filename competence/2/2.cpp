#include <cmath>
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    printf(string("%."+to_string(n)+"f\n").c_str(), M_PI);
}
