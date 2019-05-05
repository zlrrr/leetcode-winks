class Solution {
public:
    bool checkRecord(string s) {
        int acount = 0, lcount = 0;
        for(auto c : s){
            if('A' == c){
                ++acount;
            }
            if(acount > 1)return false;
            if('L' == c){
                ++lcount;
            }else{
                lcount = 0;
            }
            if(lcount > 2)return false;
        }
        return true;
    }
};
