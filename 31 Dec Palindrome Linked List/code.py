

class Solution:
    def rec(self,h):
        if(not h or not h.next):return h
        pr,nx=None,None
        while(h):
            nx=h.next
            h.next=pr
            pr=h
            h=nx
        return pr
    def isPalindrome(self, head):
        if(not head.next):
            return True
        sl,fs=head,head
        while(fs and fs.next):
            sl=sl.next
            fs=fs.next.next
        sl=self.rec(sl)
        fs=head
        while(fs and sl):
            if(fs.data!=sl.data):return False
            fs,sl=fs.next,sl.next
        return True
        
        