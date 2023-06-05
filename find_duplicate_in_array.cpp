class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0,fast=0;
        do{
            fast=nums[nums[fast]];
            slow=nums[slow];
        }while(fast!=slow);
        slow=0;
        do{
            fast=nums[fast];
            slow=nums[slow];
        }while(fast!=slow);
        return fast;
    }
};