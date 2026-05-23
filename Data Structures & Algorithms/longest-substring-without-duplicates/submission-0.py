class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0
        r = 0
        count = 0
        seen = set()
        while l < len(s):
            while r < len(s) and s[r] not in seen:
                seen.add(s[r])
                r += 1
            count = max(count, r-l)
            seen.remove(s[l])
            l += 1


        return count