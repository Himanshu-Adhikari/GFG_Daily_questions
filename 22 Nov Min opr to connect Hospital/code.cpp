class Solution:
    def minConnect(self, V, edges):
        aux = {}
        for u, v in edges:
            aux.setdefault(u, []).append(v)
            aux.setdefault(v, []).append(u)
        if(len(edges)<V-1):
            return -1
        clr=[-1]*V
        cl=0
        vis=[0]*V
        def rec(u,col):
            if(vis[u]):
                return
            vis[u]=1
            clr[u]=col
            if(u not in aux):
                return
            for j in aux[u]:
                if(vis[j]==0):
                    rec(j,col)
        for i in range(0,V):
            if(vis[i]==0):
                rec(i,cl)
                cl+=1
        
        return cl-1
        
