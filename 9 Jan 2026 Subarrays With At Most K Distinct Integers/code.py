class Solution:
    def countAtMostK(self, arr, k):
        j,n=0,len(arr)
        m={}
        res=0
        for i in range(n):
            m[arr[i]]=m.get(arr[i],0)+1
            while(len(m)>k):
                m[arr[j]]-=1
                if(m[arr[j]]==0):
                    del m[arr[j]]
                j+=1
            res+=(i-j+1)
        return res
        