class Solution {
  public:
    int andInRange(int l, int r) {
        int res=0;
        for(int i=(int)(log(r) / log(2));i>=0;i--){
            if((l & 1<<i) && (r & 1<<i)){
                res+=(1<<i);
            }
            else if((l & (1<<i)) || (r & (1<<i)))
                break;
        }
        return res;
    }
};
