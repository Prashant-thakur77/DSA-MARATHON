#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cout<<"ROLL NO: 24BCS094"<<endl;
    int t;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t--){
        long long n;
        cout<<"Enter number of elements: ";
        cin>>n;
        vector<int> v(n);
        cout<<"Enter elements: ";
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++){
            bool flag=true;
            for(int j=0;j<n-i-1;j++){
                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                    flag=false;
                }
            }
            if(flag) break;
        }
        cout<<"Sorted elements: ";
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
