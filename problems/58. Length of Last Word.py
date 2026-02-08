class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words  = s.strip().split(" ")
        return len(words[-1])
    
print(Solution().lengthOfLastWord("Hello World"))  # Output: 5
print(Solution().lengthOfLastWord("   fly me   to   the moon  "))  # Output: 4
print(Solution().lengthOfLastWord("luffy is still joyboy"))  # Output: 6