class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100, 'D' : 500, 'M' : 1000}
        value = 0
        curr = 0
        prev = 1000
        for i in list(s):
            curr = roman[i]
            if curr > prev:
                value -= prev*2
                value += curr
            else:
                value += curr
            prev = curr
        
        return value

print(Solution().romanToInt("III"))      # Output: 3
print(Solution().romanToInt("LVIII"))       # Output: 58
print(Solution().romanToInt("MCMXCIV"))       # Output: 1994