class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        multiset<int> st;
        for(auto x : nums){
            st.insert(x);
        }
        int mx = nums[0];
        int ans = -1;
        for(int i = 0 ; i < nums.size() ; i++){
             mx = max(mx, nums[i]);

            if (mx - *st.begin() <= k) {
                return i;
            }
            auto it = st.find(nums[i]);
            if (it != st.end()) {
                st.erase(it);
            }
        }
        
        return ans;
    }
};