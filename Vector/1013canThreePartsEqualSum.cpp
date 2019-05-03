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
        //求出数组数总和必须为3的倍数才有可能划分完成
        allsum /= 3;
        for(int i = 0; i < l; ++i){
            testsum += A[i];
            if(testsum == allsum){
                //如果测试和刚好为总和的三分之一，则此处是切分点，测试和清零
                testsum = 0;
                ++part;
            }
        }
        if(part != 3)return false;
        return true;
    }
};
