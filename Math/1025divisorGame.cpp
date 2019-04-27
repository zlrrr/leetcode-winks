class Solution {
public:
    bool divisorGame(int N) {
        if(0 == N || 1 == N)return false;
        if(2 == N)return true;
        for(int i = 1; i < N; ++i){
            if(N%i == 0){
                if(!divisorGame(N - i))return true;
                //返回的结果是对方能否赢
                //一旦某一次对方输了，就会被抓住这个策略
            }
        }
        return false;
        //return N%2 == 0 ? true : false;
        //脑筋急转弯一行解决 
    }
};
