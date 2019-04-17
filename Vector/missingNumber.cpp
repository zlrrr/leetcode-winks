class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size(), m = sum;
        for(int i = 0; i < m; ++i){
            sum ^= i;
            sum ^= nums[i];
        }
        return sum;
    }
};
