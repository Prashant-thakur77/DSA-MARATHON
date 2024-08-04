#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int j=0;j<n;j++){
        cin>>nums[j];
    }
    cout<<removeDuplicates(nums)<<endl;


}

