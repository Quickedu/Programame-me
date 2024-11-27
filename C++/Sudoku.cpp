#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool esValidoSudoku(const vector<vector<int>>& sudoku) {
    for (int i = 0; i < 9; ++i) {
        unordered_set<int> fila, columna, submatriu;
        for (int j = 0; j < 9; ++j) {
            if (fila.count(sudoku[i][j])) return false;
            fila.insert(sudoku[i][j]);

            if (columna.count(sudoku[j][i])) return false;
            columna.insert(sudoku[j][i]);

            int filaSubmatriu = 3 * (i / 3);
            int columnaSubmatriu = 3 * (i % 3);
            if (submatriu.count(sudoku[filaSubmatriu + j / 3][columnaSubmatriu + j % 3])) return false;
            submatriu.insert(sudoku[filaSubmatriu + j / 3][columnaSubmatriu + j % 3]);
        }
    }
    return true;
}

int main() {
    int numCasos;
    cin >> numCasos;
    for (int i = 0; i < numCasos; ++i) {
        vector<vector<int>> sudoku(9, vector<int>(9));
        for (int j = 0; j < 9; ++j) {
            for (int k = 0; k < 9; ++k) {
                cin >> sudoku[j][k];
            }
        }
        cout << (esValidoSudoku(sudoku) ? "SI" : "NO") << endl;
    }
    return 0;
}