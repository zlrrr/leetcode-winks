class Solution {
public:
    int countPrimes(int n) {
        //ɸѡ��
        if(n == 1 || n == 2)return 0;
        int count = 0;
        vector<bool> isPrim(n + 1, true);
        //����������0-n,��ʼ��Ϊtrue
        for(int i = 2; i < sqrt(n) + 1; ++i){
        	//ɸѡ����ֻ��Ҫִ�е������������Ա�֤���к��������ҳ� 
            if(isPrim[i]){
            //�����ǰiΪ������������+1����һ������Ϊ��ǰ������������Ϊfalse
                ++count;
                for(int j = 1; j*i <= n; ++j){
                        isPrim[j*i] = false;
                }
            }//�����ǰ����������������               
        }
        for(int i = sqrt(n) + 1; i < n; ++i){
        	//�˺�ֱ�ӱ������������� 
            if(isPrim[i]){
                ++count;
            }
        }
        return count;
    }
};
