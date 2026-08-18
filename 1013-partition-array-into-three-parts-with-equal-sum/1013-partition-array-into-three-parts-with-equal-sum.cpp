class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int target = 0;
        for(auto x: arr){
            target += x;
        }
        if(target % 3 != 0) return false;
        target = target / 3;
        int ans = 0;
        int count = 0;

        for(int i = 0 ; i < arr.size() ; i++){
            ans += arr[i];
            if(ans == target){
                count++;
                ans = 0;
            }
            if(count == 3) return true;
        }
        return false;
    }
};