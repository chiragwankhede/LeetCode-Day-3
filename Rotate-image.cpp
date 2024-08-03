#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//  To rotate an image of 2D-array by 90 deg clockwise - 

    void rotate(vector<vector<int>>& matrix) {
        
        //  First transpose the array
        for(int i= 0 ;i <matrix.size() ; i++){
            for(int j= i ; j<matrix[i].size() ; j++){
                swap(matrix[i][j] , matrix [j][i]);
            }
        }

        //  Second step - reverse the row using reverse utility

        for(int i =0 ; i<matrix.size() ; i++){
            reverse (matrix[i].begin() , matrix[i].end());
        }


    }
int main()
{
vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    rotate(matrix);

    cout << "\nRotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}