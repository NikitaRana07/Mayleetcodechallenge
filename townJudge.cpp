class Solution {
public:
    int findJudge(int N, vector<vector<int>>& t) {
        vector<int> v(N+1,1);
        map<int, set<int>> m;
        for(int i=0; i<t.size(); i++)
        {
            v[t[i][0]]=0;
            m[t[i][0]].insert(t[i][1]);
        }
        int c=-1;
        
        for(int i=1; i<=N; i++)
        {
            if(v[i]==1){
                if(c==-1)
                    c = i;
                else
                    return -1;
            }
        }
        
        for(auto itr = m.begin(); itr!=m.end(); itr++)
        {
            if(itr->second.find(c)==itr->second.end())
                return -1;
        }
        return c;
    }
};
