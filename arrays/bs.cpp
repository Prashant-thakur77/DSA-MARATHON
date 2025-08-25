#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "ROLL NO: 24BCS085\n";
    int t; 
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t--) {
        int n, x;
        cout << "Enter size of array: ";
        cin >> n;
        vector<int> v(n);
        cout << "Enter elements: ";
        for (int &i : v) cin >> i;
        sort(v.begin(), v.end());
        cout << "Enter number to search: ";
        cin >> x;

        int low = 0, high = n - 1, found = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid] == x) { found = mid; break; }
            else if (v[mid] < x) low = mid + 1;
            else high = mid - 1;
        }

        if (found != -1) {
            cout << "Number found at index " << found << endl;
            v.erase(v.begin() + found);
        } else {
            cout << "Number not found. Inserting in sorted order.\n";
            v.insert(v.begin() + low, x);
        }

        cout << "Updated array: ";
        for (int i : v) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
