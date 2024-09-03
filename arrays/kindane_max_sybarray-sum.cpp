#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
    int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }

            else if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
        

