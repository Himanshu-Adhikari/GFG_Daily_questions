class Solution {
  public:
    int minCandy(vector<int> &ratings) {
        // code here
        int N=ratings.size();
        vector<int>res(N,1);
        for(int i=1;i<N;i++){
            if(ratings[i-1]<ratings[i]){
                res[i]=res[i-1]+1;
            }
        }
        for(int i=N-1;i>=1;i--){
            if(ratings[i-1]>ratings[i] and res[i-1]<=res[i])res[i-1]=res[i]+1;
        }
        
        int sum=accumulate(res.begin(),res.end(),0);
        return sum;
    }
};

