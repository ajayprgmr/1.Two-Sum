// Time complexity of this code is O(n)
// Using unordered_map data structure
#include<bits/stdc++.h>
#include"Myutilities.h"
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0;i<nums.size();i++){
        for(int j=1+i; j<nums.size();j++){
           int ts=nums[i]+nums[j];
           if(target==ts)
           return {i,j};
           
        }
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
