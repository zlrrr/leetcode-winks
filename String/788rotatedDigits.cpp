class Solution {
public:
    int rotatedDigits(int N) {
        int count = 0;
        string temp;
        //注意：string.find()函数如果找不着，对应的返回值为特殊的npos
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
