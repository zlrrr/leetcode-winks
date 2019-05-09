class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> cmap;
        int l = s.length();
        for(int i = 0; i < l; ++i){
            if(cmap.find(s[i]) == cmap.end()){
                cmap.insert(pair<char, int>(s[i], 1));
            }else{
                ++cmap[s[i]];
            }
        }
        int flag = 0, sum = 0;
        for(auto c : cmap){
            if(c.second%2 == 1)flag = 1;
            //如果有落单的字符，则记录 
            sum += (c.second/2)*2; 
            //没有的话，利用int的特性将数量floor为2的倍数 
        }
        return flag? sum + 1: sum;
    }
};
