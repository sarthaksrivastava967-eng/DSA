class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int a = 0, b = 0;
        for(int i = 0; i < aliceSizes.size(); i++)
            a = a + aliceSizes[i];
        for(int i = 0; i < bobSizes.size(); i++)
            b = b + bobSizes[i];
        int diff = (b - a) / 2;
        for(int i = 0; i < aliceSizes.size(); i++) {
            for(int j = 0; j < bobSizes.size(); j++) {
                if(bobSizes[j] - aliceSizes[i] == diff)
                    return {aliceSizes[i], bobSizes[j]};
            }
        }
        return {};
    }
};