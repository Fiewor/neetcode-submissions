class Solution {
    /**
     * @param {string} s
     * @param {number} k
     * @return {number}
     */
    characterReplacement(s, k) {
        let l = 0, r = 0
        let count = {} // {a: 1, b: 2}
        let res = 0

        while (r < s.length){
            let len = r - l + 1
            if(s[r] in count){
                count[s[r]] += 1
            }else{
                count[s[r]] = 1
            }
            let mf = Math.max(...Object.values(count))
            if(len - mf > k){
                count[s[l]] -= 1
                l++
            }
            res = Math.max(res, r-l+1)
            r++
        }
        return res
    }
}
