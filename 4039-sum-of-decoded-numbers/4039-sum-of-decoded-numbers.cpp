class Solution {
public:
long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b & 1)
            result = result * a % 1000000007;
        a = a * a % 1000000007;
        b >>= 1;
    }
    return result;
}

    int sumDecoded(vector<long long>& nums) {
        long long sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            long long first;
            long long second;
            long long width = nums[i] % 10;
            long long d = (nums[i] / 10);
            vector<int>ans;
            long long x = d;
            while(x >=  10){
                int y = x % 10;
                ans.push_back(y); 
                x = x / 10;
            }
            ans.push_back(x);
            long long countdigit = 0;
            long long digit = 0;
            for(int i = ans.size() - 1 ; i >= 0 ; i--){
                if(countdigit == width){
                    first = digit;
                    digit = 0;
                }
                digit = digit*10 + ans[i];
                countdigit++;
            }
            second = digit;
            sum = (sum + power(first, second)) % 1000000007;

        }
        return sum;
        
    }
};