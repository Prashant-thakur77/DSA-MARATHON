#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& v, int n) {
    for (int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;

      
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
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

        insertionSort(v, n);

        cout << "Sorted elements: ";
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
