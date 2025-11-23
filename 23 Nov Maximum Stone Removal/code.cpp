class Solution {
  public:
    int cn=0,n;
    void rec(int c,map<int,int>&vis,vector<vector<int>>&aux){
        if(vis[c])return;
            vis[c]=1;
            cn++;
        for(int i=0;i<n;i++){
            if(!vis[i] and (aux[i][0]==aux[c][0] || aux[i][1]==aux[c][1])){
                rec(i,vis,aux);
            }
        }
    }
    int maxRemove(vector<vector<int>>& stones) {
         n=stones.size();
        map<int,int>vis;
        int cmp=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cn=0;
                rec(i,vis,stones);
                res+=(cn-1);
                
            }
        }
        return res;
    }
};