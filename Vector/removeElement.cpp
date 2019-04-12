class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int new_length = length;
        int index1 = 0, index2 = 0;
        while(index1 < length){
            if(val == nums[index1]){
                --new_length;
            }else{
                nums[index2] = nums[index1];
                ++index2;
            }
            ++index1;
        }
        return new_length;
    }
};
