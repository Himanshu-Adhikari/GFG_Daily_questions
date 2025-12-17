class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        string t="";
        for(auto c:s1)t+=c;
        for(auto c:s1)t+=c;
        int n=s2.size();
        vector<int>lp(n,0);
        int i=1,j=0;
        while(i<n){
            if(s2[i]==s2[j])lp[i++]=++j;
            else{
                if(j)j=lp[j-1];
                else i++;
            }
        }
        i=0,j=0;
        while(i<(n+n)){
            if(t[i]==s2[j]){i++,j++;if(j==n)return true;}
            else{
                if(j)j=lp[j-1];
                else i++;
            }
        }
        return false;
    }
};