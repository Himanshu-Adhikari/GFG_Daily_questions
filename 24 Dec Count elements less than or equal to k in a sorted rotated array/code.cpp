class Solution {
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        sort(begin(arr),end(arr));
        return (upper_bound(begin(arr),end(arr),x)-begin(arr));
    }
};