class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hash = defaultdict(list)

        for str in strs:
            bucket = [0] * 26

            for char in str:
                bucket[ord(char)-ord('a')] += 1

            hash[tuple(bucket)].append(str)
        
        return hash.values()