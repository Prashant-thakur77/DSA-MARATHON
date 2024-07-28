#include<bits/stdc++.h>
using namespace std;
vector<int>insertion_sort(vector<int> arr, int n) {
        // Your code here
        for(int i=0;i<n;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
            }
        }
        return arr;
        
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> u=insertion_sort(v,n);
   
    for(int i=0;i<n;i++){
        cout<<u[i]<<" ";
    }
    return 0;

    
}   