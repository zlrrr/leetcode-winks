class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.length();
        if(!length || length == 1)return true;
        int first = 0, last = length - 1;
        while(first < last){
            while(!(('A'<= s[first] && s[first] <= 'Z')||
                    ('a'<= s[first] && s[first] <= 'z')||
                   ('0'<= s[first] && s[first] <= '9'))){
                if(first == length)return true;
                ++first;
            }
            while(!(('A'<= s[last] && s[last] <= 'Z')||
                    ('a'<= s[last] && s[last] <= 'z')||
                   ('0'<= s[last] && s[last] <= '9'))){
                --last;
            }
            if(s[first] != s[last] &&
               toupper(s[first]) != toupper(s[last]))return false;
            ++first;
            --last;
        }
        return true;
    }
};
