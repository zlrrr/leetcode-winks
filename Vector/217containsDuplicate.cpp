class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> x;
        int l = nums.size();
        for(int i = 0; i < l; ++i){
            if(x.find(nums[i]) != x.end()){
                return true;
            }else{
                x.insert(nums[i]);
            }    
        }
        return false;
    }
};
