class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int allsum = 0, l = A.size(), testsum = 0, part = 0;
        if(A.empty())return true;
        if(l < 2)return false;
        for(auto a : A){
            allsum += a;
        }
        if(allsum%3)return false;
        //����������ܺͱ���Ϊ3�ı������п��ܻ������
        allsum /= 3;
        for(int i = 0; i < l; ++i){
            testsum += A[i];
            if(testsum == allsum){
                //������Ժ͸պ�Ϊ�ܺ͵�����֮һ����˴����зֵ㣬���Ժ�����
                testsum = 0;
                ++part;
            }
        }
        if(part != 3)return false;
        return true;
    }
};
