class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        set<int>s;
        vector<int>res;
        for(int i:arr){
            if(s.count(i))res.push_back(i);
            s.insert(i);
        }
        return res;
    }
};