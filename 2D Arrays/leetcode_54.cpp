#include <iostream>
#include <vector>
using namespace std;

void SpiralRotation(vector<vector<int>> &matrix)
{
    // write your code Here
    int row = matrix.size(), column = matrix[0].size();
    
}

int main()
{
    int row, column;
    cout << " Enter the number of raws : " << " ";
    cin >> row;
    cout << " Enter the number of columns : " << " ";
    cin >> column;

    vector<vector<int>> matrix(row, vector<int>(column));
    cout << " Enter the Elements of the matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Calling to the Function 
    SpiralRotation(matrix);

    return 0;
}