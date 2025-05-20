class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        my_set = {"1", "2", "3", "4", "5", "6", "7", "8", "9"}

        for i in range(len(board)):
            temp_set = my_set.copy()

            for j in range(len(board[i])):
                if board[i][j] != ".":
                    if board[i][j] in temp_set:
                        temp_set.remove(board[i][j])
                    else:
                        return False

        for i in range(len(board)):
            temp_set = my_set.copy()

            for j in range(len(board[i])):
                if board[j][i] != ".":
                    if board[j][i] in temp_set:
                        temp_set.remove(board[j][i])
                    else:
                        return False

        for box_row in range(0, 9, 3):
            for box_col in range(0, 9, 3):
                temp_set = my_set.copy()

                for i in range(3):
                    for j in range(3):
                        cell = board[box_row + i][box_col + j]
                        
                        if cell != ".":
                            if cell in temp_set:
                                temp_set.remove(cell)
                            else:
                                return False

        return True