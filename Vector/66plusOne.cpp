class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int l = digits.size(), carry = 1, index = 0;
        while(carry && index < l){
            ++digits[index];
            cout << digits[index] <<endl;
            if(digits[index] > 9){
                carry = 1;
                digits[index] -= 10;
            }else{
                carry = 0;
            }
            ++index;
        }
        if(carry){
            digits.push_back(1);
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
