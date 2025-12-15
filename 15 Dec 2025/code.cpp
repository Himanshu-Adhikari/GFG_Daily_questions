class Solution {
  public:
    int cntWays(vector<int>& arr) {
        int n=arr.size();
        int so=0,se=0;
        for(int i=0;i<n;i++){if(i%2)so+=arr[i];else se+=arr[i];}
        int co=0,ce=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(i%2)co+=arr[i],so-=arr[i];
            else ce+=arr[i],se-=arr[i];
            if(i%2){
                if(co-arr[i]+se == ce+so)res++;
            }   
            else{
                if(ce-arr[i]+so == co+se)res++;
            }
        }
        return res;
    }
};