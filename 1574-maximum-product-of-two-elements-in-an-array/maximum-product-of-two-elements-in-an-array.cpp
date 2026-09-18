class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int left=0;
     int right=0;
     for(int i=0;i<nums.size();i++)  {
        int x=nums[i];
     if(x>left){
     right=left;
     left=x;
     }
     else if (x>right){
        right=x;
     }
     }
     return(left-1)*(right-1);

    }
};