#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <list>
#include <cstring>
#include <queue>
using namespace std;

// BFS

void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid) {
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});
    int n = grid.size();
    int m = grid[0].size();

    while(!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        // traverse int the neigbours and mark them if 1
        for (int drow = -1; drow < 2; drow++) {
            for (int dcol = -1; dcol < 2; dcol++) {
                int nrow = row + drow;
                int ncol = col + dcol;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

}

int main() {
    vector<vector<char>> grid = {
        {'0', '1', '1'}, 
        {'1', '0', '0'}, 
        {'0', '0', '1'}, 
        {'1', '0', '1'}
    };  

    int n = grid.size();
    int m = grid[0].size();
    int cnt = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            if(!vis[row][col] && grid[row][col] == '1') {
                cnt++;
                bfs(row, col, vis, grid);
            }
        }
    }
    cout << "Number of islands: " << cnt << endl;
    
    return 0;
}