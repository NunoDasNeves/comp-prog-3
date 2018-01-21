#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
    long long N;
    cin >> N;
    cin.ignore();
    cin.ignore();
    string buf;

    while (N--) {
        map<string, string> as;
        while(getline(cin, buf) &&  buf != "") {
            string s = "";
            for (auto c : buf) {
                if (c != ' ') s+=c;
            }
            sort(s.begin(), s.end());
            as[buf] = s;
        }
        for (auto fit = as.cbegin(); fit != as.cend();) {
            //printf("check \"%s\":\n", f.first.c_str());
            string fstr = fit->first;
            string fstrs = fit->second;
            fit = as.erase(fit);
            for (auto& s : as) {
                //printf("  vs \"%s\"\n",s.first.c_str());
                //cout << f.second << " !=!=! " << s.second << endl;
                if(fstrs == s.second) {
                    printf("%s = %s\n", fstr.c_str(), s.first.c_str());
                }
            }
        }

        if (N) cout << endl;
    }
}
