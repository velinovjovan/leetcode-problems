from typing import List
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1

        while l < r - 1:
            mid = (l+r)//2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                l = mid
            else:
                r = mid
        if target <= nums[l]:
            return l
        if target <= nums[r]:
            return r
        return r+1

print(Solution().searchInsert([1,3,5,6], 5))  # Output: 2
print(Solution().searchInsert([1,3,5,6], 2))  # Output: 1
print(Solution().searchInsert([1,3,5,6], 7))  # Output: 4