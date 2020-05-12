class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {
        if(n.size()==1)
            return n[0];
        
        int a =-1;
        
        if(n[0]!=n[1])
            return n[0];
        
        for(int i=1; i<n.size()-1; i++)
        {
            if(n[i]!=n[i-1]&&n[i]!=n[i+1])
            {
                a=n[i];
                break;
            }
                
        }
        
        if(n[n.size()-1]!=n[n.size()-2])
            return n[n.size()-1];
        
        return a;
    }
};
