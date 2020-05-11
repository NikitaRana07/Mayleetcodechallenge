class Solution {
public:
    void ff(vector<vector<int>> &i, int sr, int sc, int newColor, int scolor)
    {
        
        if(sr<0||sr>=i.size()||sc<0||sc>=i[0].size())
            return;
        if(i[sr][sc]!=scolor)
            return;
        if(i[sr][sc]==newColor)
            return;
        
        i[sr][sc]=newColor;
        
        ff(i, sr+1, sc, newColor, scolor);
        ff(i, sr-1, sc, newColor, scolor);
        ff(i, sr, sc+1, newColor, scolor);
        ff(i, sr, sc-1, newColor, scolor);
            
    }
    
    vector<vector<int>> floodFill(vector<vector<int>> i, int sr, int sc, int newColor) {
        ff(i,sr,sc,newColor, i[sr][sc]);
        return i;
    }
};
