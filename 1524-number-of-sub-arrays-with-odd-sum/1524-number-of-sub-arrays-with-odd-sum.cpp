class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long sum = 0;
        long long ans = 0;

        unordered_map<char,int> mp;
        mp['e'] = 1;

        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if(sum % 2 == 0) {
                ans += mp['o'];
                mp['e']++;
            } else {
                ans += mp['e'];
                mp['o']++;
            }
            ans %= 1000000007;
        }
        return ans;
    }
};