#include<iostream>
#include<vector>
using namespace std;

void printWaveForm(vector<vector<int>>& matrix){
    int row = matrix.size();
    int column = matrix[0].size();

    for(int j=0; j<column; j++){
        if(j % 2 == 0){ // if column is even then  go top -> down 
            for(int i=0; i<row; i++){
                cout<< matrix[i][j]<<"->";
            }
        }
        else{ // go down -> up 
            for(int i = row -1; i>=0; i--){
                cout<<matrix[i][j]<<"->";
            }
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

    printWaveForm(matrix);
    
    return 0;
}