// Time complexity of this code is O(n)
// Using unordered_map data structure
#include<bits/stdc++.h>
#include"Myutilities.h"
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int start=0,end=nums.size()-1;
    while(start<end){
        int sum=nums[start]+nums[end];
        if(sum==target){
            return {start,end};
        }
        else if(sum>target) end--;
             else start++;


    }
    return {};
    
}

int main(){
   int s;
   cin>>s;
   vector<int>v(s);
  for(int i=0;i<v.size();i++)
   cin>>v[i];
   int target;cin>>target;
   vector<int>result=twoSum(v,target);
   for(auto &i:result)
    cout<<i<<" ";
   
}
