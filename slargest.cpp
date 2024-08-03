#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int e;
    cin>>e;
    vector<int> arr(e);
    for(int i=0;i<e;i++){
        cin>>arr[i];
    }
        int largest=arr[0];
        int slargest=-1;
        
        for(int i=0;i<e;i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>slargest) slargest=arr[i];
        }
        // Code Here
        cout<< slargest<<endl;

}