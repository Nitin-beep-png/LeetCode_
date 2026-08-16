class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        long long sum = 0;
        mp[0] = -1;

        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            long long rev = ((sum % k) + k) % k;
            if(mp.find(rev) != mp.end()){
                long long length = abs(mp[rev] - i);
                if(length >= 2){
                    return true;
                }

                
            }
            else{
                mp[rev] = i;
            }
        }
        return false;
    }
};