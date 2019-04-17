class Solution {
public:
    int countPrimes(int n) {
        //筛选法
        if(n == 1 || n == 2)return 0;
        int count = 0;
        vector<bool> isPrim(n + 1, true);
        //数组索引从0-n,初始化为true
        for(int i = 2; i < sqrt(n) + 1; ++i){
        	//筛选质数只需要执行到开方处即可以保证所有合数都被找出 
            if(isPrim[i]){
            //如果当前i为质数，质数量+1，且一切索引为当前倍数的索引置为false
                ++count;
                for(int j = 1; j*i <= n; ++j){
                        isPrim[j*i] = false;
                }
            }//如果当前非质数，索引后移               
        }
        for(int i = sqrt(n) + 1; i < n; ++i){
        	//此后直接遍历找质数即可 
            if(isPrim[i]){
                ++count;
            }
        }
        return count;
    }
};
