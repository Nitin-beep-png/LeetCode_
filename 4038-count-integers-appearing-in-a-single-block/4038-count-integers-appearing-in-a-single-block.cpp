class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        unordered_map<int,int> mp;
        unordered_map<int,bool> valid;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(nums[i]) != mp.end()){
                int x = mp[nums[i]];
                if( (i-x) != 1 && valid[nums[i]] == false){
                    count--;
                    valid[nums[i]] = true;
                }
                mp[nums[i]] = i;
                continue;
            }
            mp[nums[i]] = i;
            valid[nums[i]] = false;
            count++;
        }
        return count;
    }
};