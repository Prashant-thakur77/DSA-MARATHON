#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007



int32_t main() {
    ll n;
    cin>>n;
    vector<int> v(n);
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
      if(flag){
        break;
      }
    }
    for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}