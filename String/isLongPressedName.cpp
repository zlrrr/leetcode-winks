class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.empty() && typed.empty())return true;
        if(name.empty())return false;
        int l1 = name.length(), l2 = typed.length();
        if(l1 > l2)return false;
        int index1 = 0, index2 = 0;
        while(index2 < l2){
            //typedδ����ĩ�ˣ���ִ��ѭ��
            if(name[index1] == typed[index2] && index1 < l1){
                //name����δ����ĩ�˲�����typed�������ʱ��nameָ�����
                ++index1;
            }
            if(index1 == l1 && name[index1 - 1] != typed[index2])
                return false;
            //���name������ĩ�˲���typed��������ȣ��򷵻�false
            ++index2;
        }
        if(index1 != l1){
            //���typed����ĩ�˶�nameû����򷵻�false
            return false;
        }else{
            //���tyed��name���������ĩ�ˣ���˵����Ӧ��ϵ��ȷ
            return true;
        }
    }
};
