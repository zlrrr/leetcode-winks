class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)return "1";
        string temp = "1", next;
        char num;
        int count;
        for(int i = 1; i < n; ++i){
            //进行n次循环输出字符串
            next = "";
            int j = 0;
            while(j < temp.length()){
                //扫描temp字符串
                num = temp[j];
                count = 0;
                while(num == temp[j] && j < temp.length()){
                    ++j;
                    ++count;
                }
                //拼接字符串的效率从高到低依次为：
                //+=、append()、stringstream、sprintf()。
                next += to_string(count); 
                next += num;
                //按照相应的数字个数生产下一个字符串
            }
            temp = next;
        }
        return temp;
    }
};
