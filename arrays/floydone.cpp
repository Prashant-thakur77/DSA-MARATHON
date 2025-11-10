#include <iostream>
#include <vector>
using namespace std;
void heapify(vector<int>& arr, int n, int i) {
    int largest = i, l = 2*i + 1, r = 2*i + 2;
    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(vector<int>& a, int n) {
    for (int i = n/2 - 1; i >= 0; i--) 
    heapify(a, n, i);
    for (int i = n-1; i > 0; i--) 
    { swap(a[0], a[i]); heapify(a, i, 0); }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int &x : arr) cin >> x;
    heapSort(arr,n);
    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
