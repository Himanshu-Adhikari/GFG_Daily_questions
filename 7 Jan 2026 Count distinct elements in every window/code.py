class Solution:
    def countDistinct(self, arr, k):
        res=[]
        mp={}
        n,j=len(arr),0
        for i in range(0,n):
            if((i-j+1)>k):
                mp[arr[j]]-=1
                if(mp[arr[j]]==0):
                    del mp[arr[j]]
                j+=1
            mp[arr[i]]=mp.get(arr[i],0)+1
            if((i-j+1)==k):
                res.append(len(mp))
            
        return res
        
        