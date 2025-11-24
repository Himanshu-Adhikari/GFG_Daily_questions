class Solution {
  public:
    class DSU{
     public:
     int n;
     vector<int>parent;
     vector<int>sz;
     
     DSU(int v){
         n=v;
         parent.resize(n,1);
         sz.resize(n,1);
         for(int i=0;i<n;i++){
             parent[i]=i;
         }
     }
     
     int Find(int u){
         if(parent[u]==u) return u;
         return parent[u]=Find(parent[u]);
     }
     
     void Union(int u , int v){
         int pu = Find(u);
         int pv = Find(v);
         if(pu==pv){
             return;
         }
         
         if(sz[pv]>sz[pu]){
             parent[pu]=pv;
             sz[pv]+=sz[pu];
         }
         else{
             parent[pv]=pu;
             sz[pu]+=sz[pv];
         }
     }
        
    };
    
    int mst_weight(int vertices , int to_not_use , vector<vector<int>> &edges , vector<int>&used){
        int n = edges.size();
        int mst_wt=0;
        int count_edges=0;
        
        DSU dsu(vertices);
        
        for(int i=0;i<n;i++){
            if(i==to_not_use) continue;
            int u = edges[i][0];
            int v = edges[i][1];
            int wt=edges[i][2];
            
            if(dsu.Find(u) != dsu.Find(v)){
                dsu.Union(u,v);
                mst_wt+=wt;
                count_edges++;
                used[i]=1;
            }
        }
        
        if(count_edges != vertices-1) return -1;
        return mst_wt;
    }
    int secondMST(int n, vector<vector<int>> &edges) {
        // code here
        
        int m = edges.size();
        
        if(m<=n-1) return -1;
        
        auto mysort = [&](const auto&a , const auto&b){
            return a[2]<b[2];
        };
        
        sort(edges.begin(),edges.end(),mysort);
        
        vector<int>used(m,0);
        
        int primary_mst_wt = mst_weight(n,-1,edges,used);
        
        if(primary_mst_wt == -1) return -1;
        
        vector<int>copy_used = used;
        
        int ans=INT_MAX;
        
        for(int i=0;i<m;i++){
            if(copy_used[i]==1){
                int secondary_mst_wt = mst_weight(n,i,edges,used);
                if(secondary_mst_wt != -1 && secondary_mst_wt > primary_mst_wt){
                    ans=min(ans,secondary_mst_wt);
                }
            }
        }
        
        if(ans==INT_MAX) return -1;
        return ans;
        
    }
};
