#include <bits/stdc++.h>
using namespace std;

class Hash {
    int bucket;
    vector<vector<int>> v;
public:
    Hash(int x) {
        bucket = x;
        v.resize(bucket);
    }

    int ind(int k) {
        return k % bucket;
    }

    void insert(int k) {
        int index = ind(k);
        v[index].push_back(k);
    }

    void del(int k) {
        int index = ind(k);
        auto it = find(v[index].begin(), v[index].end(), k);
        if (it != v[index].end()) {
            v[index].erase(it);
        }
    }

    void display() {
        for (int i = 0; i < bucket; i++) {
            cout << i;
            for (int x : v[i]) {
                cout << " --> " << x;
            }
            cout << endl;
        }
    }
};

void solve() {
    vector<int> v = {1, 3, 4, 5, 6, 9, 0};
    Hash h(7);
    for (int i = 0; i < v.size(); i++) {
        h.insert(v[i]);
    }
    h.del(4);
    h.display();
}

int32_t main() {
    int t = 1;
     solve();
    return 0;
}
