#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <list>
#include <cstring>
#include <queue>
using namespace std;

void bfs(int row, int col, vector<vector<int>> &arr, vector<vector<int>> &vis, int n) {
    queue<pair<pair<int, int>, int>> q;
    int maxTime = 0;
    q.push({{row, col}, maxTime});
    
    while (!q.empty()) {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int time = q.front().second;
        maxTime = max(maxTime, time);
        //cout << row << '\t' << col << endl;
        vis[row][col] = 2;
        q.pop();
        for (int i = -1; i <= 1; i++) {
            int nrow = row + i; 
            for (int j = -1; j <= 1; j++) {
                int ncol = col + j;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && arr[nrow][ncol] == 1 && vis[nrow][ncol] != 2) {
                    vis[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, time + 1});
                }
            }
        }
    }
    cout << "Time needed to rootten all tomatoes: " << maxTime << endl;
}

int main() {

    vector<vector<int>> arr = {
        {2, 1, 1},
        {1, 1, 0}, 
        {0, 1, 1}
    };
    vector<vector<int>> vis(arr.size(), vector<int>(arr[0].size(), 0));
    int t = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            if (arr[i][j] == 2 && vis[i][j] != 1) {
                bfs(i, j, arr, vis, arr.size());
                t++;
            }
        }
    }

    

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << vis[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}