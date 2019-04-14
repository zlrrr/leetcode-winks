#define TEST(x)     \
    if(n >= x){     \
            if(n % x){   \
                return false;   \
            }else{              \
                n = n/x; \
            }           \
        }

class Solution {
public:
    bool isPowerOfFour(int n) {
        TEST(65536);
        TEST(256);
        TEST(16);
        TEST(4);
        if(n == 1){
            return true;
        }else{
            return false;
        }
    }
};
