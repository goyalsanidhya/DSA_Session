#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int mat[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];
    }
    cout << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    int startRow = 0, endRow = r, startCol = 0, endCol = c;
    while(startRow < endRow && startCol < endCol)
    {
        for(int i = startCol; i < endCol; i++)
            cout << mat[startRow][i] << " ";
        startRow++;
        for(int i = startRow; i < endRow; i++)
            cout << mat[i][endCol - 1] << " ";
        endCol--;
        for(int i = (endCol - 1); i >= startCol; i--)
            cout << mat[endRow - 1][i] << " ";
        endRow--;
        for(int i = (endRow - 1); i >= startRow; i--)
            cout << mat[i][startCol] << " ";
        startCol++;
    }
    return 0;
}