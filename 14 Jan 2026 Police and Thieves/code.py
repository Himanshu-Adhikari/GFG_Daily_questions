class Solution:
    def catchThieves(self, arr, k):
        i,j,n,res=0,0,len(arr),0
        while(i<n and j<n):
            while(i<n and arr[i]!='P'):i+=1
            while(j<n and arr[j]!='T'):j+=1
            if(i<n and j<n and abs(i-j)<=k):
                res+=1
                i,j=i+1,j+1
            elif(j<n and j<i):j+=1
            else: i+=1
        return res
        

