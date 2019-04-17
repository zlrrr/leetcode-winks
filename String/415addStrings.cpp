class Solution {
public:
    string addStrings(string num1, string num2) {
    	//从末尾到头部逐步相加起来，最后反转字符串
		//区别C语言，注意c++的string类型判断是否到末尾的方法是利用length，而不是是否为\0 
        if(num1.empty() && num2.empty())return "";
        if(num1.empty())return num2;
        if(num2.empty())return num1;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        char num3[5100];
        int i = 0, l1 = num1.length(), l2 = num2.length();
        char sum, carry = 0;
        while(i < l1 && i < l2){
            sum = num1[i] - '0' + num2[i] - '0' + carry;
            carry = 0;
            if(sum > 9){
                sum -= 10;
                carry = 1;
            }
            num3[i] = sum + '0';
            ++i;
        }
        while(i < l1){
            sum = num1[i] - '0' + carry;
            carry = 0;
            if(sum > 9){
                sum -= 10;
                carry = 1;
            }
            num3[i] = sum + '0';
            ++i;
        }
        while(i < l2){
            sum = num2[i] - '0' + carry;
            carry = 0;
            if(sum > 9){
                sum -= 10;
                carry = 1;
            }
            num3[i] = sum + '0';
            ++i;
        }
        if(1 == carry){
            num3[i] = '1';
            ++i;
        }
        num3[i] = '\0';
        string num(num3);
        reverse(num.begin(),num.end());
        return num;
    }
};
