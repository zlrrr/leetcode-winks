class Solution {
public:
    bool isSpace(char x){
        if(x == ' ')return true;
        return false;
    }
    
    int countSegments(string s) {
        int l = s.length();
        int count = 0, flag = 0;
        for(int i = 0; i < l; ++i){
            flag = 0;
            while(isSpace(s[i]) && i < l){    
                ++i;
            }
            while(!isSpace(s[i]) && i < l){
                ++i;
                flag = 1;
            }
            if(flag){
                ++count;
            }
        }
        return count;
    }
};
