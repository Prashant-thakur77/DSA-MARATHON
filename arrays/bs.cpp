#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

int32_t main() {
  int no;
  cout<<"Enter no to search :";
  cin>>no;
  int n;
  cout<<"Enter size of the array :";
  cin>>n;

  vector<int> v(n);
  cout<<"Enter elements of the array :";
  for(int i=0;i<n;i++){
    
    cin>>v[i];
  }
  /*int last=v[0];
  for(int i=1;i<n;i++){
    if(v[i]<last){
      cout<<-1<<endl;
      return 0;
    }
    else last=v[i];
  }*/
  sort(all(v));
  

  int low=0;
  int high=n-1;
  int flag=0;
  while(low<=high){
    int mid=(low+high)/2;
    int noatmid=v[mid];
    if(noatmid==no){
      cout<<"No found at index "<<mid<<endl;
      v.erase(v.begin()+mid);
      flag=1;
      break;
    }
    else if(noatmid<no){
      low=mid+1;
    }
    else high=mid-1;
  }
  //cout<<high<<" "<<low<<endl;
  if(flag==0){
    cout<<"No was not present int he array hence inserting the no in sorted manner "<<endl;
    v.insert(v.begin()+low,no);
  }
  cout<<"New array:";
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return 0;
  
}