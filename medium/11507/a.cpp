#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
using namespace std;
#define PX "+x"
#define NX "-x"
#define PY "+y"
#define NY "-y"
#define PZ "+z"
#define NZ "-z"

int main() {
    map<string, int> v = {{PY, 0}, {NY, 1}, {PZ, 2}, {NZ, 3}};
    map<string, vector<string>> m = {
        {PX, {PY, NY, PZ, NZ}},
        {NX, {NY, PY, NZ, PZ}},
        {PY, {NX, PX, PY, PY}},
        {NY, {PX, NX, NY, NY}},
        {PZ, {PZ, PZ, NX, PX}},
        {NZ, {NZ, NZ, PX, NX}}
    };

    int L;
    char buf[10];
    while (scanf("%d\n", &L), L != 0) {

        string r = PX;
        for (int i = 0; i < L-1; ++i) {
            scanf("%s", buf);
            string curr = buf;
            if (curr != "No") {
                r = m[r][v[curr]];
            }
        }
        cout << r << endl;
    }
}

/*
   +y -y +z -z
+x +y -y +z -z
-x -y +y -z +z
+y -x +x +y +y
-y +x -x -y -y
+z +z +z -x +x
-z -z -z +x -x
*/
