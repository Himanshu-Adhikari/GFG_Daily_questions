class Solution {
  public:
    string minWindow(string& s1, string& s2) {
        int i = 0, j = 0; 
        int minlen = INT_MAX ; 
        int st = -1 ;
        for(; i < s1.length(); i++)
        {
            if(s1[i] == s2[j]) {
                j++; 
            }
            
            if(j == s2.length()) //saare characters of s2 mil gaye
            {
                //mid aur end me redundant characters nahi ho skte par start me ho 
                //sakte hai
                
                int ed = i; //end ko save karlo for length calculation
                j--; 
                
                while(j >= 0)
                {
                    if(s1[i] == s2[j])
                        j--;
                    i--;
                }
                
                i++; //start of min window of the window acquired
                j++; //j = 0 now
                
                int currlen = ed - i + 1; //present window ki length nikalo 
                
                if(currlen < minlen) //< not <= since if mul. answers leftmost bhejte
                {
                    minlen = currlen ;
                    st = i ;
                }
                //Now let i be at start.. i++ se previous window bigad jaega thus new 
                //sol. if possible in current window can also be found 
            }
        }
        
        if(minlen == INT_MAX) return "" ;
        
        return s1.substr(st, minlen) ;
    }
};
