class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n < 1? false : !(2147483648 % n);
    }
};
