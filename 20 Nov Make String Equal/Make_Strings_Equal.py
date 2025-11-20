class Solution:
    def minCost(self, s, t, transform, cost):
        a = [[float('inf') for _ in range(26)] for _ in range(26)]
        for i,(u,v) in enumerate(transform):
            a[ord(u)-ord('a')][ord(v)-ord('a')]=min(a[ord(u)-97][ord(v)-97],cost[i])
        for i in range(26):
            a[i][i]=0
        for k in range(26):
            for i in range(26):
                for j in range(26):
                    if(a[i][k]!=float('inf') and a[k][j]!=float('inf')):
                        a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
        res=0
        INF=float('inf')
        for i in range(len(s)):
            x = ord(s[i]) - 97
            y = ord(t[i]) - 97
            if x == y:
                continue
            best = INF
            for mid in range(26):
                if a[x][mid] != INF and a[y][mid] != INF:
                    best = min(best, a[x][mid] + a[y][mid])
            if best == INF:
                return -1
            res += best

        return res
    