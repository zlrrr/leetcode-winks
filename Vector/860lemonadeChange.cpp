class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills.empty())return true;
        if(bills[0] == 10 || bills[0] == 20)return false;
        int five_count = 1, ten_count = 0;
        for(int i = 1; i < bills.size(); ++i){
            if(5 == bills[i]){
                ++five_count;
            }
            if(10 == bills[i]){
                if(five_count >= 1){
                    --five_count;
                    ++ten_count;
                }else{
                    return false;
                }
            }
            if(20 == bills[i]){
                if(five_count >= 1 && ten_count >= 1){
                    --five_count;
                    --ten_count;
                }else if(five_count >= 3){
                    five_count -=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
