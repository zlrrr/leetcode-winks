class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.empty() && typed.empty())return true;
        if(name.empty())return false;
        int l1 = name.length(), l2 = typed.length();
        if(l1 > l2)return false;
        int index1 = 0, index2 = 0;
        while(index2 < l2){
            //typed未到达末端，则执行循环
            if(name[index1] == typed[index2] && index1 < l1){
                //name索引未到达末端并且于typed索引相等时，name指针后移
                ++index1;
            }
            if(index1 == l1 && name[index1 - 1] != typed[index2])
                return false;
            //如果name索引到末端并且typed索引不相等，则返回false
            ++index2;
        }
        if(index1 != l1){
            //如果typed到达末端而name没到达，则返回false
            return false;
        }else{
            //如果tyed和name数组均到达末端，则说明对应关系正确
            return true;
        }
    }
};
