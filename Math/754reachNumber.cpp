class Solution {
public:
    int reachNumber(int target) {
        //�����������ϸ�Գ�
        //�ֳɿ���ֱ�ӵ�������ͼ�ӵ������
        //ֱ�ӵ���ֳ�[1,n]ͬ�������ֱ��ͷ�ת���������Ϊ��������������
        //��ͬ�������ֱ�������Ϊ2�ı���������Ϊֱ����
        //��ӵ������ֻ���ܶ���һ����������
        //ȡ����n����ż�Ծ�������
        long t = target < 0 ? -target : target;
        long n = ceil((sqrt(8 * t + 1) - 1)/2);
        long m = n*(n + 1)/2;
        if(t%2 == m%2)return (int)n;
        if(n%2 == 0)return (int)(n + 1);
        return (int)(n + 2);
    }
};
