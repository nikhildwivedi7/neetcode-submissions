class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] {};
        bool columns[9][9] {};
        bool boxes[9][9] {};
        for(int r = 0; r < 9; ++r) {
            for(int c = 0; c < 9; ++c) {
                if(board[r][c] == '.') continue;
                int box = (r / 3) * 3 + (c / 3);
                int digit = board[r][c] - '1';
                if( rows[r][digit] ||
                    columns[c][digit] ||
                    boxes[box][digit])
                    return false;
                rows[r][digit] = true;
                columns[c][digit] = true;
                boxes[box][digit] = true;
            }
        }
        return true;
    }
};
