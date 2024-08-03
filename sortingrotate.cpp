#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int e;
    cin>>e;
    vector<int> yes(e);
    for(int i=0;i<e;i++){
        cin>>yes[i];
    }
    vector<int> arr(yes.begin(),yes.end());
    sort(arr.begin(),arr.end());
    bool pls=true;
    for(int i=0;i<yes.size();i++){
        if(arr==yes){
            cout<<"true"<<endl;
            pls=false;
        }
        else rotate(yes.begin(),yes.begin()+1,yes.end());

    }

    
    if(pls ) cout<<"false"<<endl;
       return 0;
    }
 



    