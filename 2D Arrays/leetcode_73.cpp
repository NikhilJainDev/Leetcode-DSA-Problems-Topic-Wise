// Leetcode Problem 73 - Set Matrixes Zero 
#include<iostream>
#include<vector>
using namespace std;

void setMatrixZeros(vector<vector<int>> & matrix){
    int row = matrix.size();
    int cols = matrix[0].size();

    bool firstRawZero = false;
    bool firstColumnZero = false;

    // Check if firsRawZero contains zero or not 
    for(int j = 0; j<cols; j++){
        if(matrix[0][j] == 0){
            firstRawZero = true;
        }
    }

    // check if firsColumnZero contains zero or not
    for(int i=0; i<row; i++){
        if(matrix[i][0] == 0){
            firstColumnZero = true;
        }
    }

    // For remaining elements 

    for(int i=1; i<row; i++){
        for(int j=1; j<cols; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for(int i=1; i<row; i++){
        for(int j=1; j<cols; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // If these Actually are zeros then set zeros in their places 
    if(firstRawZero){
        for(int j = 0; j<cols; j++){
            matrix[0][j] = 0;
      }
    }

    if(firstColumnZero){
        for(int i = 0; i<row; i++){
            matrix[i][0] = 0;
        }
    }
    

}
    

 int main(){

     int row, column;
    cout<<" Enter the number of raws : "<<" ";
    cin>>row;
    cout<<" Enter the number of columns : "<<" ";
    cin>>column;

    vector<vector<int>> matrix(row, vector<int>(column));
    cout<<" Enter the Elements of the matrix "<<endl;
    for(int i = 0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix[i][j];
        }
    }

    // Calling the function to actually perform the work 
    setMatrixZeros(matrix);

    // Print the matrix after set to the zeros 
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
 }