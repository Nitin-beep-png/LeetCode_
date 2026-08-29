class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long reversed_num = 0;
        int n = x;
        while(n >= 10){
            long long m = n % 10;
            n = n / 10;
            reversed_num = reversed_num*10 + m;
        }
        reversed_num = reversed_num*10 + n;
        if(reversed_num == x){
            return true;
        }
        return false;
    }
};