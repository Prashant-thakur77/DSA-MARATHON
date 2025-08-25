#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

vector<double> avgON2(vector<int>& X) {
    int n = X.size();
    vector<double> A(n);
    for(int i=0;i<n;i++){
        long long sum=0;
        for(int j=0;j<=i;j++) sum += X[j];
        A[i]=(double)sum/(i+1);
    }
    return A;
}

vector<double> avgON(vector<int>& X) {
    int n = X.size();
    vector<double> A(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=X[i];
        A[i]=(double)sum/(i+1);
    }
    return A;
}

int main(){
    vector<int> sizes = {500,1000,2000,4000,6000,8000,10000,12000,15000,20000};

    cout << "n O(n^2)_time(us) O(n)_time(us)\n";
    for(int n : sizes){
        vector<int> X(n);
        for(int i=0;i<n;i++) X[i]=rand()%100;

        int runs=20; // more runs for stability
        long long total1=0,total2=0;

        for(int r=0;r<runs;r++){
            auto start = high_resolution_clock::now();
            auto A1=avgON2(X);
            auto stop = high_resolution_clock::now();
            total1+=duration_cast<microseconds>(stop-start).count();

            start = high_resolution_clock::now();
            auto A2=avgON(X);
            stop = high_resolution_clock::now();
            total2+=duration_cast<microseconds>(stop-start).count();
        }

        cout << n << " " << (total1/runs) << " " << (total2/runs) << "\n";
    }
    return 0;
}
