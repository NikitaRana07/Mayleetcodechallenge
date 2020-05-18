class Solution {
public:
    int minkadane(vector<int>&A)
    {
        int mnsum=A[0];
        int sum = A[0];
        
        for(int i=1; i<A.size(); i++)
        {
            if(sum>0)
            {
                sum=A[i];
            }
            else
            {
                sum+=A[i];
            }
            mnsum=min(sum,mnsum);
        }
        return mnsum;
    }
    
    int mxkadane(vector<int>&A)
    {
        int mnsum=A[0];
        int sum = A[0];
        
        for(int i=1; i<A.size(); i++)
        {
            if(sum<0)
            {
                sum=A[i];
            }
            else
            {
                sum+=A[i];
            }
            mnsum=max(sum,mnsum);
        }
        return mnsum;
    }
    
    int maxSubarraySumCircular(vector<int>& A) {
     
        int tsum = 0;
        int bs = INT_MIN;
        int f = 0; 
        for(int i=0; i<A.size(); i++){
            tsum+=A[i];
            bs=max(bs,A[i]);
            if(A[i]>0)
                f=1;
        }
        
        if(f==0)
            return bs;
        
        else{
            int ay= mxkadane(A);
            int yu = tsum-minkadane(A);
            int anse = max(ay,yu);
            return anse;
        }
            
    }
};
