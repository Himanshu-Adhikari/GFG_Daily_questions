//Just have the relationg between first second and a01 a02 and a12 and cal. a0

class Solution {
  public:
    vector<int> constructArr(vector<int>& arr) {
        int n = (int)(sqrt(arr.size()*2)) + 1;
        vector<int> res(n);
        int sm=(arr[0]+arr[1]-arr[n-1])/2;
        res[0]=sm;
        for(int i=1;i<n;i++){
            res[i]=arr[i-1]-res[0];
        }
        return res;
    }
};