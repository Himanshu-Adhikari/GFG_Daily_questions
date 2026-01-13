class Solution {
  public:
    bool canServe(vector<int> &arr) {
        int f=0,t=0;
        for(int i:arr){
            if(i==5)f++;
            else if(i==10){
                if(f)f--,t++;
                else return false;
            }
            else{
                if(t and f){
                    t--,f--;
                }
                else if(f>2){
                    f-=3;
                }
                else return false;
            }
        }
        return true;
    }
};