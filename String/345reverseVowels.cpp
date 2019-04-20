class Solution {
public:
    bool notVowel(char x){
        if(x == 'a')return false;
        if(x == 'e')return false;
        if(x == 'i')return false;
        if(x == 'o')return false;
        if(x == 'u')return false;
        if(x == 'A')return false;
        if(x == 'E')return false;
        if(x == 'I')return false;
        if(x == 'O')return false;
        if(x == 'U')return false;
        return true;
    }
    
    string reverseVowels(string s) {
        int low = 0, high = s.length() - 1;
        char temp;
        while(notVowel(s[low]) && low <= high){
                ++low;
        }
        while(notVowel(s[high]) && high >= low){
                --high;
        }
        while(low < high){
            temp = s[high];
            s[high] = s[low];
            s[low] = temp;
            //注意交换完之后需要改变下标，否则循环无法停止
            ++low;
            --high;
            while(notVowel(s[low]) && low <= high){
                ++low;
            }
            while(notVowel(s[high]) && high >= low){
                --high;
            }
        }
        return s;
    }
};
