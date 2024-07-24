#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
   
    
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;

}
