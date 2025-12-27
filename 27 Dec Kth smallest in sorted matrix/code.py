class Solution:
    def kthSmallest(self, mat, k):
        a=[val for j in mat for val in j]
        a.sort()
        return a[k-1]
        