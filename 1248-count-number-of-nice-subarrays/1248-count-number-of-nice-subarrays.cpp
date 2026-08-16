class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int oddcount = 0;
        int ans = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] % 2 != 0){
                oddcount++;
            }
            int required = oddcount - k;
            if(mp.find(required) != mp.end()){
                ans += mp[required];
            }
            mp[oddcount]++;
        }
        return ans;
    }
};