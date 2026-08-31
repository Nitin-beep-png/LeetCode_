class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int found = 1;
        for(int i = left ; i <=right ; i++){
            int x = i;
            while(x >= 10){
                int remainder = x % 10;
                if(remainder == 0 || i % remainder != 0 ){
                    found = 0;
                    break;
                }
                x = x / 10;
            }
            if(found == 1){
                if(i % x == 0)
                ans.push_back(i);
            }
            found = 1;
        }
        return ans;
    }
};