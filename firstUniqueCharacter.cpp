class Solution {
public:
    int firstUniqChar(string s) {
        int a=INT_MAX;
        unordered_map<char, vector<int>> mp;
        
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]].push_back(i);
        }
        
        for(auto p=mp.begin(); p!=mp.end(); p++)
        {
            if(p->second.size()==1)
            {
                a = min(a, p->second[0]);
                
            }
        }
        if(a==INT_MAX)
            return -1;
        return a;
    }
};
