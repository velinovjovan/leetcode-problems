from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        for chars in zip(*strs):
            if len(set(chars)) == 1:
                res += chars[0]
            else:
                break
        return res
    
print(Solution().longestCommonPrefix(["flower","flow","flight"]))  # Output: "fl"
print(Solution().longestCommonPrefix(["dog","racecar","car"]))     # Output: ""