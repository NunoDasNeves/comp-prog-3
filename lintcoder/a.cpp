#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
using namespace std;

vector<vector<int>> threeSum(vector<int> &numbers) {
	multiset<int> s;
	for (auto& n: numbers) {
		s.insert(n);
	}
	set<vector<int>> out;
	vector<int> curr(3);
	while(s.size() > 0) {
		auto xi = s.begin();
		int x = *xi;
		s.erase(xi);
		auto yi = s.begin();
		while (yi != s.end()) {

			int y = *yi;
			int z = -(x + y);
			if (z >= y) {
				auto zis = s.equal_range(z);
				for(auto zi = zis.first; zi != zis.second; ++zi) {
					if (zi != s.end() && zi != yi) {
						curr[0] = x;
						curr[1] = y;
						curr[2] = z;
						out.insert(curr);
                    }
				}
			}
            cout << endl;
			while (yi != s.end() && *yi == y) yi++;
		}
	}
	vector<vector<int>> aout;
	for(auto& v:out) {
		aout.push_back(v);
	}
    return aout;
}

int main() {
	vector<int> in = {-1, 0, -1, 1, -4, 2};
	vector<vector<int>> out = threeSum(in);
    cout << out.size() << endl;
    cout << "ok\n";
	for (auto& v:out){
		for (auto i:v) {
			cout << i << ' ';
		}
		cout << endl;
	}
    return 0;
}
