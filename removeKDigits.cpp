class Solution {
public:
    string removeKdigits(string n, int k) {
        stack<char> st;
        
        for(int i=0; i<n.size(); i++)
        {
            if(st.empty()){
                if(n[i]!='0')
                    st.push(n[i]);
            }
            else if(n[i]>=st.top() || k<=0)
            {
                 st.push(n[i]);
            }
            else
            {
                while(!st.empty() && n[i]<st.top() && k>0)
                {
                        st.pop();
                        k--;
                }
                if(!st.empty()||n[i]!='0')
                   st.push(n[i]);
            }
        }
        n.clear();
        n="";
        while(!st.empty())
        {
            if(k>0)
            {
                st.pop();k--;
            }
            else{
            n=st.top()+n;
            st.pop();
            }
        }
        if(n=="")
            return "0";
        return n;
    }
};
