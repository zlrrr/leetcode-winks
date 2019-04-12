// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int BinarySearch(int low, int high){
            long long_mid = ((long)low + (long)high)/2;
            int mid = long_mid;
            //注意类型转换！
            int result = guess(mid);
            if(result == 0){
                return mid;
            }else if(result == 1){
                return BinarySearch(mid + 1, high);
            }else{
                return BinarySearch(low, mid - 1);
            }
    }
    
    int guessNumber(int n) {
        int low = 1, high = n;
        return BinarySearch(low, high);
    }
};
