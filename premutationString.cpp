class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        int l = s1.size();
        vector <int> mp1(26), mp2(26);
        
        for(int i=0; i<s1.size(); i++)
            mp1[s1[i]-'a']++;
            
        for(int i=0; i<s2.size(); i++)
        {
            mp2[s2[i]-'a']++;
            if(i>=l)
                mp2[s2[i-l]-'a']--;
            if(mp1==mp2)
                return true;
        }
        
        return false;
    }
};
