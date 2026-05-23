class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, r = 0, len(prices)-1
        res = 0

        lowest = prices[0]
        for price in prices:
            if price < lowest:
                lowest = price
            res = max(res, price - lowest)
        
        return res