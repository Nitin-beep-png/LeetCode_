class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int group= 0;
        sort(reservedSeats.begin(),reservedSeats.end());
        group = 2 * n ;
        for(int i = 0 ; i < reservedSeats.size() ; i++){
            bool group1 = true;
            bool group2 = true;
            bool group3 = true;
            int row = reservedSeats[i][0];

            int j = i;

            while(j < reservedSeats.size() &&reservedSeats[j][0] == row){
            int seat = reservedSeats[j][1];
            if(seat >= 2 && seat <= 5){
                group1 = false;
            }
            if(seat >=4 && seat <= 7){
                group2 = false;
            }
            if(seat >= 6 && seat <= 9){
                group3 = false;
            }
            j++;
            }
            group -= 2;
            if(group1 && group3){
                group += 2;
            }else if(group1 || group2 || group3){
                group += 1;
            }
            i = j - 1;
        }

        return group;
    }
};