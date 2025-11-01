#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int l, int r){
    int p=a[r], i=l-1;
    for(int j=l;j<r;j++) if(a[j]<p) swap(a[++i],a[j]);
    swap(a[i+1],a[r]);
    return i+1;
}
void quickSort(int a[], int l, int r){
    if(l<r){
        int pi=partition(a,l,r);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,r);
    }
}
void solve(){
    int a[]={5,2,9,1,5,6}, n=6;
    quickSort(a,0,n-1);
    cout<<"24BCS085"<<endl;
    cout<<"Quick Sort: ";
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}
int32_t main(){
    solve();
    return 0;
}
