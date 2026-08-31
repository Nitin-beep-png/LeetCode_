
class Solution {
public:
    int smallestRepunitDivByK(int k) {     
        if(k % 2 == 0 || k % 5 == 0) 
        {
            return -1;
        }   
        int length = 0;
        int remainder = 0;
        for(int i = 0 ; i < k ; i++){
            remainder = ((remainder*10) + 1) % k;
            length++;
            if(remainder == 0){
                return length;
            }
        }
        return -1;
    }
};