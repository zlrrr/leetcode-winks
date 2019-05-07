class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int l1 = A.size(), l2 = B.size();
        int dif = 0, i = 0, j = 0;
        vector<int> result;
        for(auto a : A){
            dif += a;
        }
        for(auto b : B){
            dif -= b;
        }
        dif >>= 1;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        while(1){
            if(A[i] == B[j] + dif){
                break;
            }
            if(A[i] > B[j] + dif){
                j++;
            }
            if(A[i] < B[j] + dif){
                i++;
            }
        }
        result.push_back(A[i]);
        result.push_back(B[j]);
        return result;
    }
};
