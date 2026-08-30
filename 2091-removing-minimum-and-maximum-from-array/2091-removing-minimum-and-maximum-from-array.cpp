class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }
        int fromLeft = max(minIndex, maxIndex) + 1;
        int fromRight = n - min(minIndex, maxIndex);
        int mixed = min(minIndex + 1, n - minIndex) +  min(maxIndex + 1, n - maxIndex);

        return min({fromLeft, fromRight, mixed});
    }
};