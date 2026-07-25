class Solution:
    def isValid(self, s: str) -> bool:
        open=['(','{','[']
        close=[')','}',']']
        stack=[]
        for i in s:
            if i in open:
                stack.append(i)
            else:
                if i==')':
                    if not stack or stack[-1]!='(':
                        return False
                    else:
                        stack.pop()
                elif i=='}':
                    if not stack or stack[-1]!='{':
                        return False
                    else:
                        stack.pop()
                elif i==']':
                    if not stack or stack[-1]!='[':
                        return False
                    else:
                        stack.pop()
        return not stack