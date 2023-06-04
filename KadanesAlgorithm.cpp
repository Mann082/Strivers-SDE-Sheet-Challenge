class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int maxans=INT_MIN,maxend=0;
        for(int i=0;i<nums.size();i++){
            maxend+=nums[i];
            maxans=max(maxend,maxans);
            if(maxend<0)maxend=0;
        }
        return maxans;
    }
};