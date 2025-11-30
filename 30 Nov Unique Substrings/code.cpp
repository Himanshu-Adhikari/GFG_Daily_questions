class Solution {
  public:
    struct TrieNode{
        TrieNode*child[26];
        TrieNode(){
            for(int i=0;i<26;i++){
                child[i]=NULL;
            }
        }
    };
    int countSubs(string& s) {
        // code here
        int n=s.size();
        TrieNode *rt=new TrieNode();
        int res=0;
        for(int i=0;i<n;i++){
            TrieNode *cr=rt;
            for(int j=i;j<n;j++){
                int rq=s[j]-'a';
                if(cr->child[rq]==NULL){
                    res++;
                    cr->child[rq]=new TrieNode();
                }
                cr=cr->child[rq];
            }
        }
        return res;
    }
};