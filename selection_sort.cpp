#include<bits/stdc++.h>
using namespace std;
vector<int> selection_sort(vector<int> vec,int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n-1;j++){
            if(vec[min]>vec[j]) min=j;
        }
        int temp=vec[min];
        vec[min]=vec[i];
        vec[i]=temp;

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
    vector<int> u=selection_sort(v,n);
   
    for(int i=0;i<n;i++){
        cout<<u[i]<<" ";
    }
    return 0;

    
}