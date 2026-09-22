class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int a=-1;
        int b=-1;
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>a){
                b=a;
                a=nums[i];
                index=i;


            }
            else if (nums[i]>b){
                b=nums[i];
            }
        }
        if(a>=2*b)
        return index;
        return -1;
    }
};