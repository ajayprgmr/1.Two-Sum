// Time complexity of this code is O(n)
// Using unordered_map data structure
#include<bits/stdc++.h>
// #include"Myutilities.h"
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>umap;
    for(int i=0;i<nums.size();i++){
         int comp=target-nums[i];
         if(umap.find(comp)!=umap.end()){
            return {umap[comp],i};
         }
         else{
            umap.insert({nums[i],i});
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
