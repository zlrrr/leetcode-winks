class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> c;
        if(!A.size())return c;
        int l1 = A[0].length();
        int has, allhas;
        char x;
        for(int i = 0; i < l1; ++i){
            //对于第一个字符串搜索其每一个字符
            x = A[0][i];
            allhas = 1;
            for(int j = 1; j < A.size(); ++j){
                //对于每一个字符串查找一次
                has = 0;
                for(int k = 0; k < A[j].length(); ++k){
                    if(x == A[j][k]){
                        has = 1;
                        A[j][k] = '0';
                        //在当前字符串中找到后，需要用其他符号替代原字符
                        //防止之后重复计算
                        break;
                    }
                }
                if(0 == has){
                    //遍历所有字符串时，一旦有一个字符串不含有，则不算
                    allhas = 0;
                }
            }
            if(1 == allhas){
                string s(1,x);
                c.push_back(s);
                //此处使用to_string()会推入ascii码而不是字符
            }
        }
        return c;
    }
};
