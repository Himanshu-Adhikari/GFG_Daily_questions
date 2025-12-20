// Given a sorted array arr[] (0-index based) of distinct integers and an integer k, find the index of k if it is present in the arr[]. If not, return the index where k should be inserted to maintain the sorted order.
class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        return lower_bound(begin(arr),end(arr),k)-arr.begin();
    }
};