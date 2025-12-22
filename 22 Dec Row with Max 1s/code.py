class Solution:
    def rowWithMax1s(self, arr):
        r1,cu=0,0
        for i,j in enumerate(arr):
            if((a:=sum(j))>cu):
                r1,cu=i,a
        return r1