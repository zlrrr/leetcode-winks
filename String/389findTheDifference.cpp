class Solution {
public:
    char findTheDifference(string s, string t) {
        int l1 = s.length(), flag;
        char temp = '0';
        if(0 == l1)return t[0];
        for(int i = 0; i < l1 + 1; ++i){
            temp = t[i];
            flag = 0;
            for(int j = 0; j < l1; ++j){
                if(temp == s[j]){
                    //�����ǰѡ�е��ַ�����s[j]���ҵ�����s���ַ����Ϊ��0��
                    s[j] = '0';
                    flag = 1;
                    break;
                }
            }
            //����ұ���s��û�ҵ�temp���������Ǳ���ӵ�
            if(!flag)return temp;
        }
        return temp;
    }
};
