class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        cols = defaultdict(set)
        rows = defaultdict(set)
        squares = defaultdict(set)

        for row in range(len(board)):
            for col in range(len(board[0])):
                curr = board[row][col]
                if curr == '.':
                    continue
                if curr in cols[col] or curr in rows[row] or curr in squares[(row//3, col//3)]:
                    return False

                cols[col].add(curr)
                rows[row].add(curr)
                squares[(row//3, col//3)].add(curr)

        return True