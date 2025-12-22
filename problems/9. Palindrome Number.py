class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x < 0):
            return False
        i = x
        y = 0
        while i != 0:
            y = y * 10
            y = y + i%10
            i = i // 10

        if x == y:
            return True
        else:
            return False
        
print(Solution().isPalindrome(121))  # Output: True
print(Solution().isPalindrome(-121)) # Output: False
print(Solution().isPalindrome(10))   # Output: False