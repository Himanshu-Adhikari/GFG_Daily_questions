class Solution:
    def kthMissing(self, arr, k):
        run=0
        for i,val in enumerate(arr):
            if(val>k):
                return k
            else: k+=1
        return k
        