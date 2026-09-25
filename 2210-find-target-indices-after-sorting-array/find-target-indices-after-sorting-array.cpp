class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int left=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int right=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        vector<int> ans;
        for(int i=left;i<right;i++){
            ans.push_back(i);
        }
        return ans;
    }
};