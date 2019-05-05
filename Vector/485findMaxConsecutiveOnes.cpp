class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(!nums.size())return 0;
        int count = 0, max = 0;
        for(auto num : nums){
            if(1 == num){
                ++count;
            }else{
                max = max > count? max : count;
                count = 0;
            }
        }
        max = max > count? max : count;
        return max;
    }
};
