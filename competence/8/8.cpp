#include<vector>
#include<iostream>
int main() {
    for (int i = 0; i < 20; ++i) {
        std::vector<int> v;
        for (int j = i; j < 20; ++j) {
            v.push_back(j);
            for (int k = 0; k < v.size(); ++k) std::cout << v[k] << (k == v.size()-1 ? '\n' : ' ');
        }
    }
}
