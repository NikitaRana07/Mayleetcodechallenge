class Solution {
public:
    int firstBadVersion(int n) {
    int l=1,r=n;
            
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
         
        if (isBadVersion(m)==true && isBadVersion(m-1)==false) 
            return m; 
  
        if (isBadVersion(m)==false) 
            l = m + 1; 
  
        else
            r = m - 1; 
    } 
  
    return -1; 
    }
};
