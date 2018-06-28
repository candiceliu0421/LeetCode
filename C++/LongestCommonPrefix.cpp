// Longest Common Prefix
// 由左而右判斷
// i<strs[k].size(), k=0,1, ..... n-1
// strs[0][i]=strs[1][i]=...=strs[n-1][i]

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        if(strs.empty()) 
            return prefix;
        for(int i=0; i<strs[0].size(); i++){
            for(int j=1; j<strs.size(); j++){
                if(i>=strs[j].size()||strs[j][i]!=strs[0][i])
                    return prefix;
            }
            prefix.push_back(strs[0][i]);
        }
        return prefix;
    }
};