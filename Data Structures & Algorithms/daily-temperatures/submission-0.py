class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = []
        n = len(temperatures)

        for i in range(n):
            j = i+1
            seen = False
            while j < n:
                if temperatures[j] > temperatures[i]:
                    res.append(j - i)
                    seen = True
                    break
                j += 1
            if not seen:
                res.append(0)
        
        return res