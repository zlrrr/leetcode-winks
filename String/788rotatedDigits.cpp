class Solution {
public:
    int rotatedDigits(int N) {
        int count = 0;
        string temp;
        //ע�⣺string.find()��������Ҳ��ţ���Ӧ�ķ���ֵΪ�����npos
        for(int i = 1; i <= N; ++i){
            temp = to_string(i);
            //cout <<temp<<endl;
            if(temp.find("3") != temp.npos ||
              temp.find("4") != temp.npos ||
              temp.find("7") != temp.npos){
                continue;
            }
            if(temp.find("2") != temp.npos ||
              temp.find("5") != temp.npos ||
              temp.find("6") != temp.npos ||
              temp.find("9") != temp.npos){
                ++count;
            }
        }
        return count;
    }
};
