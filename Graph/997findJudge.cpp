class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(trust.empty())return 1;
        map<int,int> trustTable;
        set<int> hasTrust;
        vector<int> sus;
        for(auto relation : trust){
            if(trustTable.find(relation[1]) != trustTable.end()){
                ++trustTable[relation[1]];
            }else{
                trustTable.insert(pair<int,int>(relation[1], 1));
            }
            hasTrust.insert(relation[0]);
        }
        for(auto man : trustTable){
            if(N - 1 == man.second && 
               hasTrust.find(man.first) == hasTrust.end()){
                sus.push_back(man.first);
            }
        }
        if(1 == sus.size())return sus[0];
        return -1;
    }
};
