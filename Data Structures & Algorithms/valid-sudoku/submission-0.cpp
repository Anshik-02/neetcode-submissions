class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // 1. ROW CHECK
        for (int i = 0; i < 9; i++) {
            unordered_set<char> st;

            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') continue;

                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }

                st.insert(board[i][j]);
            }
        }

        // 2. COLUMN CHECK
        for (int j = 0; j < 9; j++) {
            unordered_set<char> st;

            for (int i = 0; i < 9; i++) {

                if (board[i][j] == '.') continue;

                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }

                st.insert(board[i][j]);
            }
        }

        // 3. 3x3 BOX CHECK
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {

                unordered_set<char> st;

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {

                        if (board[row + i][col + j] == '.') continue;

                        if (st.find(board[row + i][col + j]) != st.end()) {
                            return false;
                        }

                        st.insert(board[row + i][col + j]);
                    }
                }
            }
        }

        return true;
    }
};
