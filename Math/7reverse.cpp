class Solution {
public:
    int reverse(int z) {
        long y = 0, x = z;
        bool neg = false;
        if(x < 0){
            x = -x;
            neg = true;
        }
        while(x > 9){
            y += x%10;
            x /= 10;
            y *= 10;
        }
        y += x;
        if(y > pow(2,31) - 1 && !neg)return 0;
        if(y > pow(2,31) && neg)return 0;
        return neg?-y : y;
    }
};
