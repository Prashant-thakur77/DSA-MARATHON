#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[minIdx]) {
                minIdx = j;
            }
        }
        swap(v[i], v[minIdx]);
    }
}

int32_t main() {
    cout << "ROLL NO: 24BCS094" << endl;
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;

        vector<int> v(n);
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        selectionSort(v, n);

        cout << "Sorted elements: ";
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
