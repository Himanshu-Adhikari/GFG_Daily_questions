/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rec(Node*h){
        Node*p=NULL,*nx=NULL;
        
        while(h){
            nx=h->next;
            h->next=p;
            p=h;
            h=nx;
        }
        return p;
    }
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        Node*res=new Node(-1);
        head1=rec(head1),head2=rec(head2);
        int c=0;
        Node* t=res;
        while(head1 || head2 || c){
            int v=((head1?head1->data:0) + (head2?head2->data:0) + c);
            c=v/10;
            t->next=new Node(v%10);
            t=t->next;
            if(head1)head1=head1->next;
            if(head2)head2=head2->next;
        }
        res=rec(res->next);
        while(res->next and res->data==0)res=res->next;
        return res;
    }
};