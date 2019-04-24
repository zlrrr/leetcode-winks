class Solution {
public:
    int titleToNumber(string s) {
        reverse(s.begin(), s.end());
        int sum = 0;
        for(int i = 0; i < s.length(); ++i){
            sum += (s[i] - 'A' + 1)*pow(26, i);
        }
        return sum;
    }
};
