class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            int required = sum - goal;
            if(mp.find(required) != mp.end()){
                ans += mp[required];
            }
            mp[sum]++;
        }
        return ans;
    }
};