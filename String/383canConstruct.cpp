class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.empty() && magazine.empty())return true;
        if(ransomNote.empty())return true;
        if(magazine.empty())return false;
        map<char, int> m_map;
        for(auto c : magazine){
            if(m_map.find(c) == m_map.end()){
                m_map.insert(pair(c, 1));
            }else{
                ++m_map[c]; 
            }
        }
        for(auto c : ransomNote){
            if(m_map.find(c) == m_map.end())return false;
            if(m_map[c] == 0)return false;
            --m_map[c];
        }
        return true;
    }
};
