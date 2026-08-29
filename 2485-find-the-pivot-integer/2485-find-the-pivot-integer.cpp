class Solution {
public:
    int pivotInteger(int n) {
        int x = n * (n + 1) / 2;
        int p = sqrt(x);
        if (p * p == x)
            return p;

        return -1;
    }
};