class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)return "1";
        string temp = "1", next;
        char num;
        int count;
        for(int i = 1; i < n; ++i){
            //����n��ѭ������ַ���
            next = "";
            int j = 0;
            while(j < temp.length()){
                //ɨ��temp�ַ���
                num = temp[j];
                count = 0;
                while(num == temp[j] && j < temp.length()){
                    ++j;
                    ++count;
                }
                //ƴ���ַ�����Ч�ʴӸߵ�������Ϊ��
                //+=��append()��stringstream��sprintf()��
                next += to_string(count); 
                next += num;
                //������Ӧ�����ָ���������һ���ַ���
            }
            temp = next;
        }
        return temp;
    }
};
