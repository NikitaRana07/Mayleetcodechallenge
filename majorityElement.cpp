class Solution {
public:
    int majorityElement(vector<int>& n) {
        if(n.size()==1)
            return n[0];
        
        int c = n[0];
        int k=1;
        int i=1;
        
        while(i<n.size())
        {
            if(n[i]==c)
            {
                k++;
            }
            else
            {
                if(k==0)
                {
                    c=n[i];
                    k++;
                }
                else
                {
                    k--;   
                }
            }
            i++;
        }
        
        return  c;
    }
};
