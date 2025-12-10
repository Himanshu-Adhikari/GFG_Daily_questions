class Solution:
    def findTwoElement(self, arr):
        d=set(arr)
        a,b=-1,-1
        for i in range(1,len(arr)+1):
            if(i not in d):a=i
        d=set()
        for i in arr:
            if(i in d):
                b=i
            d.add(i)
        return [b,a]

