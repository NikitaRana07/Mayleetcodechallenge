class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> mp1(26);
        vector<int> mp2(26);
        vector<int> ans;
        for(int i=0; i<p.size(); i++)
        {
            mp1[p[i]-'a']++;
        }
        int l = p.size();
        for(int i=0; i<s.size(); i++)
        {
            mp2[s[i]-'a']++;
            if(i<l)
            {
                if(mp1==mp2)
                ans.push_back(0);
            }
            else if ( i>=l)
            {
                mp2[s[i-l]-'a']--;
                if(mp1==mp2)
                ans.push_back(i-l+1);
            }
                
            
        }
        return ans;
    }
};
