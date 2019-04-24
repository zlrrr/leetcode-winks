class Solution {
public:
    int arrangeCoins(int n) {
        long x = n;
        return (int)(floor((sqrt(1 + 8*x) - 1)/2));
    }
};
