#include<iostream>
#include<vector>
using namespace std;

void AddMatrix(vector<vector<int>> & matrix1, vector<vector<int>> & matrix2){

    int row1 = matrix1.size(), col1 = matrix1[0].size(), row2 = matrix2.size(), col2 = matrix2[0].size();
     vector<vector<int>> ans(row1, vector<int>(col1));
    if(row1 = row2 = col1 = col2){
        for(int i = 0; i<row1; i++){
            for(int j = 0; j<col2; j++){
                ans[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        // Finally print the answer matrix 
        cout<<" Addition of matrix 1 & matrix 2 is : "<<endl;
        for(int i=0; i<row1; i++){
            for(int k = 0; k<col2; k++){
                cout<<ans[i][k]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<" Matrix Addition Not Possible "<<endl;
    }

}
int main(){

    int row1, row2, col1, col2;
    cout<<" Enter Number of rows in matrix 1 : "<<" ";
    cin>>row1;
    cout<<" Enter Number of columns in matrix 1  : "<<" ";
    cin>>col1;
    cout<<" Enter number of rows in matrix 2  : "<<" ";
    cin>>row2;
    cout<<" Enter number of columns in matrix 2 : "<<" ";
    cin>>col2;

    vector<vector<int>> matrix1(row1, vector<int>(col1));
    vector<vector<int>> matrix2(row2, vector<int>(col2));

    cout<<" Enter the Elements in Matrix 1 "<<endl;
    for(int i=0; i<row1; i++){
        for(int j = 0; j<col1; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<" Enter the Elements in Matrix 2"<<endl;
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            cin>>matrix2[i][j];
        }
    }

    AddMatrix(matrix1, matrix2);

return 0;
}