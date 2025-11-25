class Solution:
    def subarrayXor(self, arr):
        # code here 
        n=len(arr)
        res=0
        for i,val in enumerate(arr):
            contri=(i+1)*(n-i)
            if(contri%2):res^=val
        return res
        