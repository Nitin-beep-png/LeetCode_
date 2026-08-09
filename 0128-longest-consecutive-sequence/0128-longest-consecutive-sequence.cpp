class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        set<int> st;
        for(auto x: nums)
        {
            st.insert(x);
        }
        int count = 1;
        int maxcount = 1;
        for(auto it = st.begin();it!=st.end();++it)
        {
            auto nextIt = next(it);
            if(nextIt!=st.end()){
                if(*nextIt == *it+1)
                {
                    count++;
                }
                else
                {
                    count =1;
                }
                maxcount = max(maxcount,count);
            }
        }
        return maxcount;
    }
};