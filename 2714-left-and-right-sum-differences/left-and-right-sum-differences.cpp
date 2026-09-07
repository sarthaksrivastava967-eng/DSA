
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;
        for (int x : nums) {
            total += x;
        }
        int leftSum = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            total -= nums[i];
            int rightSum = total;
            ans.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }
        return ans;
    }
};

