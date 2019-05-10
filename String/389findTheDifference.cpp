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
                    //如果当前选中的字符能在s[j]中找到，则将s中字符标记为‘0’
                    s[j] = '0';
                    flag = 1;
                    break;
                }
            }
            //如果找遍了s还没找到temp，则它就是被添加的
            if(!flag)return temp;
        }
        return temp;
    }
};
