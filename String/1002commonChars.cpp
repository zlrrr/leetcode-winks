class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> c;
        if(!A.size())return c;
        int l1 = A[0].length();
        int has, allhas;
        char x;
        for(int i = 0; i < l1; ++i){
            //���ڵ�һ���ַ���������ÿһ���ַ�
            x = A[0][i];
            allhas = 1;
            for(int j = 1; j < A.size(); ++j){
                //����ÿһ���ַ�������һ��
                has = 0;
                for(int k = 0; k < A[j].length(); ++k){
                    if(x == A[j][k]){
                        has = 1;
                        A[j][k] = '0';
                        //�ڵ�ǰ�ַ������ҵ�����Ҫ�������������ԭ�ַ�
                        //��ֹ֮���ظ�����
                        break;
                    }
                }
                if(0 == has){
                    //���������ַ���ʱ��һ����һ���ַ��������У�����
                    allhas = 0;
                }
            }
            if(1 == allhas){
                string s(1,x);
                c.push_back(s);
                //�˴�ʹ��to_string()������ascii��������ַ�
            }
        }
        return c;
    }
};
