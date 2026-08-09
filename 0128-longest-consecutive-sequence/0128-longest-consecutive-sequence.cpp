class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxcount = 0;
        for(auto x: nums)
        {
            st.insert(x);
        }
        for(auto x: st)
        {
            if(st.count(x-1)==0)
            {
                int current = x;
                int count = 1;
                while(st.count(current+1))
                {
                    current++;
                    count++;
                }
                maxcount=max(maxcount,count);
            }
        }
        return maxcount;
    }
};