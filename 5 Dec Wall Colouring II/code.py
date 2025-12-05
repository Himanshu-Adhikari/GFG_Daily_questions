class Solution:
    def minCost(self, costs : list[list[int]]) -> int:
        # code here
        n = len(costs)
        m = len(costs[0])
        if(m==1):
            return costs[0][0] if n==1 else -1
        for i in range(1, n):
            r = sorted(enumerate(costs[i-1]), key=lambda p: p[1])
            for k in range(m):
                if r[0][0] != k:
                    costs[i][k] += r[0][1]
                else:
                    costs[i][k] += r[1][1]
        return min(costs[-1])