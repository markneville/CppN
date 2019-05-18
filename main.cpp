#include <iostream>
#include <vector>

using namespace std;

void PrintBoard(const vector<vector<int>>& v) {
    for (auto b : v) {
        for (int i : b) {
            cout << i;
        }
        cout << "\n";
    }
}

int main() {
    vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 0, 0, 0, 1, 0}};
    PrintBoard(board);

}
