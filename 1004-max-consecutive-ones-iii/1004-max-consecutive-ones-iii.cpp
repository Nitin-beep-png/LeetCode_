class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int left = 0;
    int right = 0;
    int zero = 0;
    int longest = 0;

    for(int right = left ; right < nums.size() ; right++){
        if(nums[right] == 0) zero++;
        if(zero > k){
            while(zero > k){
                if(nums[left] == 0) zero--;
                left++; 
            }
        }
        else{
            longest = max(longest , right - left +1);
        }
    } 
    return longest; 
    }
};