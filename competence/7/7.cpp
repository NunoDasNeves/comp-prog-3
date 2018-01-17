#include<set>
#include<vector>
#include<iostream>
using namespace std;
void perm(set<char>& a, vector<char> v) {
    if (v.size() == 10) for (int i = 0; i < 10; ++i) cout << v[i] << (i == 9 ? '\n' : ' ');
    for(set<char>::iterator it = a.begin(); it != a.end(); ++it) {
        set<char> b = a;
        vector<char> c = v;
        b.erase(*it);
        c.push_back(*it);
        perm(b, c);
    }
}
int main() {
    set<char> a;
    for (char i = 'A'; i<'A'+10;++i) a.insert(i);
    vector<char> v;
    perm(a, v);
}
