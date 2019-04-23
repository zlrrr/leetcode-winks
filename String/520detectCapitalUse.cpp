class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.empty())return true;
        int l = word.length();
        int uflag = 0, u = 0, d = 0;
        if(isupper(word[0]))uflag = 1;
        for(int i = 1; i < l; ++i){
            if(!uflag && isupper(word[i]))return false;
            if(uflag){
                if(isupper(word[i])){++u;}
                if(islower(word[i])){++d;}
                if(u && d)return false;
            }
        }
        return true;
    }
};
