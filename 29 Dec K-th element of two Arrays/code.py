class Solution:
    def kthElement(self, a, b, k):
        i,j=0,0
        n,m=len(a),len(b)
        while(i<n and j<m and k):
            k-=1
            if(a[i]<b[j]):
                if(not k):return a[i]
                i+=1
            else:
                if(not k):return b[j]
                j+=1
        if(i<n and j<m):
            return min(a[i],b[j])
        while(i<n and k):
            k-=1
            if(not k):return a[i]
            i+=1
        while(j<m and k):
            k-=1
            if(not k):return b[j]
            j+=1
        return -1
        
        