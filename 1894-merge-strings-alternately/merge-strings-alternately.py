class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        minlen=min(len(word1),len(word2))
        i=0
        ans=[]
        while i<minlen:
            ans.append(word1[i]+word2[i])
            i+=1
        if len(word1)>minlen:
            ans.append(word1[minlen::])
        else:
            ans.append(word2[minlen::])
        return ''.join(ans)
