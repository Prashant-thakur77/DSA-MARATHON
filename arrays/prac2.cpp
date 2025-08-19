#include <bits/stdc++.h>
using namespace std;



int32_t main() {
    long long t;
    cin>>t;
    string k=to_string(t);
    int n=k.size();
    int flag=0;
    for(int i=0;i<k.size()/2;i++){
      if(k[i]!=k[n-i-1]){
        flag=1;
        break;
      }

    }
    if(flag==0){
      cout<<t<<" is a palindrome"<<endl;
    }
    else {
       cout<<t<<" is not a palindrome"<<endl;

    }
    return 0;

}