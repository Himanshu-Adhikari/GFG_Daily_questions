class Solution:
    def countSubarrays(self, arr, k):
        n=len(arr)
        def rec(o):
            i,j=0,0
            res,c=0,0
            while(i<n):
                c+=(arr[i]%2)
                while(j<=i and c==o):
                    res+=(n-i)
                    c-=(arr[j]%2)
                    j+=1
                i+=1
            return res
        return rec(k)-rec(k+1)