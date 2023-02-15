
// the time complexity of this program is O(nlogn) 
// Using map data structure
#include<bits/stdc++.h>
#include"Myutilities.h"   // this line  is optional don't take 
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(m.find(complement) != m.end()) {
                res.push_back(m[complement]);
                res.push_back(i);
                break;
            }
            m[nums[i]] = i;
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
