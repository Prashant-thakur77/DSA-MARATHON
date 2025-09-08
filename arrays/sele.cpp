#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"24bcs085"<<endl;
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter all the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[mini]) {
                mini = j;
            }
        }
        if (mini != i) {
            swap(v[mini], v[i]);
        }
    }

    cout << "Elements after applying Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
