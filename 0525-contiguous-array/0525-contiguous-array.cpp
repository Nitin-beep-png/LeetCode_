class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int, int> mp;
        mp[0]=-1;

        int p_sum=0;
        int length = 0;
        int m_length = 0;

        for(int i = 0 ; i < n ;i++){
            if(nums[i] == 0){
                p_sum--;
            }
            else{
                p_sum++;
            }
            if(mp.find(p_sum) == mp.end()){
                mp[p_sum] = i;
            }
            else{
                m_length = i - mp[p_sum];
                length = max(length,m_length);
            }
        }
        return length;
    }
};