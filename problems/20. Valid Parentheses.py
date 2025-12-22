class Solution:
    def isValid(self, s: str) -> bool:
        target = []
        paren = {'[' : ']', '{' : '}', '(' : ')'}
        for i in list(s):
            if paren.get(i): 
                target.append(paren[i])
            elif not target:
                return False
            elif i != target.pop():
                return False
        if target:
            return False
        else:
            return True        
        
print(Solution().isValid("()"))          # Output: True
print(Solution().isValid("()[]{}"))      # Output: True
print(Solution().isValid("(]"))          # Output: False