#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> rec(int a,int b,int n,map<int,vector<vector<int>>>&aux){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        pq.push({0,a});
        vector<int>dist(n,INT_MAX);
        dist[a]=0;
        while(!pq.empty()){
            auto [wt,u]=pq.top();pq.pop();
            if(wt!=dist[u])continue;
            for(auto c:aux[u]){
                int v=c[0],cwt=c[1];
                if(dist[v]>dist[u]+cwt){
                    dist[v]=dist[u]+cwt;
                    pq.push({dist[v],v});
                }
            }
            
        }
        return dist;
    }
    int shortestPath(int V, int a, int b, vector<vector<int>> &edges) {
        map<int,vector<vector<int>>>aux;
        for(auto c:edges){
            aux[c[1]].push_back({c[0],c[2]});
            aux[c[0]].push_back({c[1],c[2]});
        }
        vector<int>d1=rec(a,b,V,aux);
        vector<int>d2=rec(b,a,V,aux);
        int res=d1[b];
        for(auto c:edges){
            res=min(res,d1[c[0]]+c[3]+d2[c[1]]);
            res=min(res,d1[c[1]]+c[3]+d2[c[0]]);
        }
        return res==INT_MAX?-1:res;
    }
};