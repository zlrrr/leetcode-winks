class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int new_length = length;
        int index1 = 1, index2 = 0;
        while(index1 < length){
            if(nums[index2] != nums[index1]){
                //若快慢指针值不相等，则慢指针的下一位置由快指针指向的值覆盖
                nums[++index2] = nums[index1];
            }else{
                --new_length;
            }
            ++index1;
        }
        return new_length;
    }
};
