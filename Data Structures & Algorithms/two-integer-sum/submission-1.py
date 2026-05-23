class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mapp = {}
        for i, num in enumerate(nums):
            mapp[num] = i
        for i, num in enumerate(nums):
            diff = target - num
            if diff in nums and mapp[diff]!=i:
                return [i, mapp[diff]]