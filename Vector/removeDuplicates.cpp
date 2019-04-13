class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int new_length = length;
        int index1 = 1, index2 = 0;
        while(index1 < length){
            if(nums[index2] != nums[index1]){
                //������ָ��ֵ����ȣ�����ָ�����һλ���ɿ�ָ��ָ���ֵ����
                nums[++index2] = nums[index1];
            }else{
                --new_length;
            }
            ++index1;
        }
        return new_length;
    }
};
