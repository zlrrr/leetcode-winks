class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = nums.size();
        if(!l || l == 1)return true;
        int step = nums[0], index = 0, nextindex, max = 0;
        //max指的是最远能到达的索引
        while(step){
            //每次确定本次的落脚点index，和能到达的范围index+step
            for(int i = index; i <= index + step; ++i){
                //在这个范围内开始搜索能跳到最远处的点
                if(max <= nums[i] + i){
                    //此处用<而忽略=会出现死循环，因为index停留在原地不动
                    max = nums[i] + i;
                    nextindex = i;
                }
                if(max >= l - 1)return true;
            }
            index = nextindex;
            step = nums[index];
        }
        //如果下一次step步距为0，则无法到达最后
        return false;
    }
};
