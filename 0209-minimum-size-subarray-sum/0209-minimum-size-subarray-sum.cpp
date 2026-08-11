class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0;
        int sum = 0;
        int ans = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n; i++)
    {
        sum += nums[i];
        while(sum >= target)
    {
        int len = i - j + 1;
        ans = min(ans, len);
        sum -= nums[j];
        j++;
    }
}

    if(ans == INT_MAX)
    return 0;

    return ans;
    }
};