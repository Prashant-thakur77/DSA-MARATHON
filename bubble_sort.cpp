#include<bits/stdc++.h>
using namespace std;
vector<int>bubble_sort(vector<int> vec, int n) {
        // Your code here
        for(int i=n-1;i>0;i--){
            for(int j=0;j<=i-1;j++){
                if(vec[j]>vec[j+1]) {
                int temp=vec[j+1];
                vec[j+1]=vec[j];
                vec[j]=temp;
                }
            }
        }
        return vec;
        
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> u=bubble_sort(v,n);
   
    for(int i=0;i<n;i++){
        cout<<u[i]<<" ";
    }
    return 0;

    
}   