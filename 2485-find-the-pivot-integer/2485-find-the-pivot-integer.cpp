class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n*(n+1))/2;
        for(int i = 1 ; i <= n ; i++){
            int first_sum = (i*(i+1))/2;
            if(first_sum == ((sum - first_sum) + i)){
                return i;
            }
        }
        return -1;
    }
};