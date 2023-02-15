// Time complexity of this code is O(n)
// Using unordered_map data structure
#include<bits/stdc++.h>
// #include"Myutilities.h"
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        auto it = lower_bound(nums.begin()+1+i , nums.end(), complement);
        if (it != nums.end() && *it == complement) {
            res.push_back(i);
            res.push_back(it - nums.begin());
            break;
        }
    }
    return res;
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
