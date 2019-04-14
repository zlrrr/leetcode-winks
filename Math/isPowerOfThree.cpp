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
    bool isPowerOfThree(int n) {
        TEST(43046721);
        TEST(6561);
        TEST(81);
        TEST(9);
        TEST(3);
        if(n == 1){
            return true;
        }else{
            return false;
        }
    }
};
