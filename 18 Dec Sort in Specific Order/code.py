class Solution:
    def sortIt(self, arr):
        # code here
        a,b=[c for c in arr if c%2],[c for c in arr if c%2==0]
        a.sort(reverse=True)
        b.sort()
        arr[:]=a+b
        
    
