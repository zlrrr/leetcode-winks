class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = nums.size();
        if(!l || l == 1)return true;
        int step = nums[0], index = 0, nextindex, max = 0;
        //maxָ������Զ�ܵ��������
        while(step){
            //ÿ��ȷ�����ε���ŵ�index�����ܵ���ķ�Χindex+step
            for(int i = index; i <= index + step; ++i){
                //�������Χ�ڿ�ʼ������������Զ���ĵ�
                if(max <= nums[i] + i){
                    //�˴���<������=�������ѭ������Ϊindexͣ����ԭ�ز���
                    max = nums[i] + i;
                    nextindex = i;
                }
                if(max >= l - 1)return true;
            }
            index = nextindex;
            step = nums[index];
        }
        //�����һ��step����Ϊ0�����޷��������
        return false;
    }
};
