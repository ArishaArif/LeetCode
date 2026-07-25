class Solution:
    def romanToInt(self, s: str) -> int:
        dict={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        val=[]
        for i in s:
            if not val:
                val.append(dict[i])
            else:
                if val[-1]<dict[i]:
                    val[-1]=dict[i]-val[-1]
                else:
                    val.append(dict[i])
        return sum(val)