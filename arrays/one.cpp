#include <bits/stdc++.h>
using namespace std;
vector<double> avgON2(vector<int>& X) {
    int n = X.size();
    vector<double> A(n);
    for (int i = 0; i < n; i++) {
        long long s = 0;
        for (int j = 0; j <= i; j++) s += X[j];
        A[i] = (double)s / (i + 1);
    }
    return A;
}
vector<double> avgON(vector<int>& X) {
    int n = X.size();
    vector<double> A(n);
    long long s = 0;
    for (int i = 0; i < n; i++) {
        s += X[i];
        A[i] = (double)s / (i + 1);
    }
    return A;
}
int main() {
    cout<<"ROLL NO: "<<"24BCS085"<<endl;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> X(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> X[i];
    vector<double> A1 = avgON2(X), A2 = avgON(X);
    cout << "\nO(n^2) result: ";
    for (double v : A1) cout << v << " ";
    cout << "\n";
    cout << "O(n) result:   ";
    for (double v : A2) cout << v << " ";
    cout << "\n";
}
