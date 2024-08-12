// problem link
// https://codeforces.com/problemset/problem/1692/C


#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        vector<string> board(8);
        vector<int> cnt(8, 0);
        
        // Reading the board configuration
        for(int i = 0; i < 8; i++){
            cin >> board[i];
            for(int j = 0; j < 8; j++){
                if(board[i][j] == '#'){
                    cnt[i]++;
                }
            }
        }
        
        int res_row = -1, res_col = -1;
        
        // Find the position of the bishop
        for(int i = 1; i < 7; i++){
            if(cnt[i] == 1 && cnt[i+1] == 2 && cnt[i-1] == 2){
                for(int j = 0; j < 8; j++){
                    if(board[i][j] == '#'){
                        res_row = i + 1; // Convert to 1-indexed row
                        res_col = j + 1; // Convert to 1-indexed column
                        break;
                    }
                }
                break;
            }
        }
        
        cout << res_row << " " << res_col << endl;
    }
    
    return 0;
}

