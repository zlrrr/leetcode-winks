class Solution {
public:
    int BinarySearch(vector<int> nums, int low, int high, int target){
        if(low > high)return -1;
        int mid =(low + high)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            return BinarySearch(nums, low, mid - 1, target);
        }else{
            return BinarySearch(nums, mid + 1, high, target);
        }
    }
    
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums, 0, nums.size() - 1, target);
    }
};
