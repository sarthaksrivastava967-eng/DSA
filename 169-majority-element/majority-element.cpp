class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
    
      unordered_map<int,int>mp;
      for(int x:nums)
      mp[x]++;
      int c = 0;
      for(auto x:mp){
        if(x.second>floor(n/2))
        c=x.first;
      }
      return c;
      
    }
};