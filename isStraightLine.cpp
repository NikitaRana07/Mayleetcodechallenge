class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
        
        if(v.size()==2)
            return true;
        
        int yy =(v[0][1]-v[1][1]);
        int xx =(v[0][0]-v[1][0]);
        
        for(int i=1; i<v.size()-1; i++)
        {
            int y = (v[i][1]-v[i+1][1]);
            int x = (v[i][0]-v[i+1][0]);
            
            if((y==0 && yy==0) ||(x==0 && xx==0))
                continue;
            
            else if((y==0 && yy!=0) ||(x==0 && xx!=0) || (y!=0 && yy==0) ||(x!=0 && xx==0))
                return false;
            else{
                int m=yy/xx;
                int g=y/x;
                if(m!=g)
                    return false;
                }
                
        }
        return true;
    }
};
