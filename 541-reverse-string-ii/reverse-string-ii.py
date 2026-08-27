class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        l=list(s)
        i=0 
        rem=len(s)  
        while(True):
            if rem>=2*k:
                l[i:i+k]=reversed(l[i:i+k])
                i=i+2*k
                rem=rem-2 * k
            else:
                 l[i:i+k]=reversed(l[i:i+k])
                 return "".join(l)
