class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        if(intervals.size()<=1)return intervals;
        vector<int> st1,st2;
        st1.push_back(intervals[0][0]);
        st2.push_back(intervals[0][1]);
        int top=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=st2[top]){
                if(intervals[i][1]>=st2[top]){
                st2.pop_back();
                st2.push_back(intervals[i][1]);}
                continue;
            }
            st1.push_back(intervals[i][0]);
            st2.push_back(intervals[i][1]);
            top++;
        }
        for(int i=0;i<=top;i++){
            vector<int> vec;
            vec.push_back(st1[i]);
            vec.push_back(st2[i]);
            ans.push_back(vec);
        }
        return ans;
    }
};