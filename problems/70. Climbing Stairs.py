class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n
        
        a, b = 1, 2
        for _ in range(3, n + 1):
            a, b = b, a + b
        return b
    
print(Solution().climbStairs(2))  # Output: 2
print(Solution().climbStairs(3))  # Output: 3