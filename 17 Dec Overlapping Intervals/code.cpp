class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& a) {
        // Code here
        sort(begin(a),end(a),[&](vector<int>i,vector<int>b){
            if(i[0]==b[0])return i[1]>b[1];
            else return i[0]<b[0];
        });
        int le=-1,se=-1,n=a.size();
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            if(a[i][0]>le){
                if(le!=-1){
                res.push_back({se,le});
                                }
                    se=a[i][0];
                    le=a[i][1];
            }
            else{
                le=max(le,a[i][1]);
            }
        }
        if(le!=-1){
            res.push_back({se,le});
        }
        return res;
    }
};