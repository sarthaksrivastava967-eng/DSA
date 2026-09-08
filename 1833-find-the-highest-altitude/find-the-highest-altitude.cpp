class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr=0;
        int maxalt=0;
        for(int g:gain){
            curr=curr+g;
            maxalt=max(maxalt,curr);
        }
        return maxalt;
        
    }
};