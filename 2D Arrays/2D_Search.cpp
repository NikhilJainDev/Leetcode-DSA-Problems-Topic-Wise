#include<iostream>
#include<vector>
using namespace std;
pair<int, int> Search2D(vector<vector<int>> & matrix, int target){
    int row = matrix.size(), column = matrix[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(matrix[i][j] == target){
                return {i, j};
            }
        }
    }
    return {-1,-1};
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
int target_value;
cout<<" Enter the target value to search : "<<" ";
cin>>target_value;

    // calling the 2DSearch function 
   pair<int, int> pr = Search2D(matrix, target_value);
   if(pr.first != -1 && pr.second != -1){
    cout<<" Element found at idx : "<<pr.first<<" "<<pr.second<<endl;
   }
   else{
    cout<<" Element not found "<<endl;
   }

    return 0;
}