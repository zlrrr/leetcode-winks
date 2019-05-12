class Solution {
public:
    string reverseOnlyLetters(string S) {
        int low = 0, high = S.length() - 1;
        while(low < high){
            while(!isalpha(S[low]) && low < high){
            	//std�����ж���ĸisalpha 
                low++;
            }
            while(!isalpha(S[high]) && low < high){
                high--;
            }
            //std�⽻������ 
            swap(S[low], S[high]);
            low++;
            high--;
        }
        return S;
    }
};
