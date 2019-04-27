class Solution {
public:
    int reachNumber(int target) {
        //对于坐标轴严格对称
        //分成可以直接到达的数和间接到达的数
        //直接到达分成[1,n]同符号相加直达和翻转其中任意个为负数，步数不变
        //和同符号相加直达数相差为2的倍数即可视为直达数
        //间接到达的数只可能多走一步或者两步
        //取决于n的奇偶性决定步数
        long t = target < 0 ? -target : target;
        long n = ceil((sqrt(8 * t + 1) - 1)/2);
        long m = n*(n + 1)/2;
        if(t%2 == m%2)return (int)n;
        if(n%2 == 0)return (int)(n + 1);
        return (int)(n + 2);
    }
};
