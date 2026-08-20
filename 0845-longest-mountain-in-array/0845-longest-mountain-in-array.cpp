class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int longest = 0;
        int n = arr.size() - 1;

        for(int i = 1 ; i < n ; i++){
            if(arr[i] <= arr[i - 1] || arr[i] <= arr[i + 1]){
                continue;
            }
            int left = i;
            int right = i;

            while(left > 0 && arr[left -1] < arr[left]){
                left--;
            }

            while(right < n && arr[right+1] < arr[right]){
                right++;
            }

            int length = right - left + 1;
            longest = max(longest,length);

            i = right - 1;
        }

        return longest;
    }
};