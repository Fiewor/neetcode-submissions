class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        max_count = 0
        for num in nums:
            count = 0
            if num-1 not in nums:
                curr = num
                while curr in nums:
                    count += 1
                    curr += 1
                max_count = max(max_count, count)
        
        return max_count
