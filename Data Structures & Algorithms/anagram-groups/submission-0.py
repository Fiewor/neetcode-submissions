class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hash = defaultdict(list)

        for str in strs:
            hash["".join(sorted(str))].append(str)
        
        return hash.values()
                