class Solution {
public:
    bool divisorGame(int N) {
        if(0 == N || 1 == N)return false;
        if(2 == N)return true;
        for(int i = 1; i < N; ++i){
            if(N%i == 0){
                if(!divisorGame(N - i))return true;
                //���صĽ���ǶԷ��ܷ�Ӯ
                //һ��ĳһ�ζԷ����ˣ��ͻᱻץס�������
            }
        }
        return false;
        //return N%2 == 0 ? true : false;
        //�Խת��һ�н�� 
    }
};
