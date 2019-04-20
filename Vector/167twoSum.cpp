class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = numbers.size();
        vector<int> two;
        int flag = 0;
        for(int i = 0; i < l; ++i){
            while(i + 2 < l){
                if(numbers[i] == numbers[i + 2]){
                    ++i;
                }else{
                    break;
                }
            }
            //提前判断是否有大量重复数字，减少时间复杂度
            for(int j = i + 1; j < l; ++j){
                if(numbers[i] + numbers[j] == target){
                    two.push_back(i+1);
                    two.push_back(j+1);
                    flag = 1;
                    break;
                }
            }
            if(flag)break;
        }
        return two;
    }
};
