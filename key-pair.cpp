#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

// this question is from GeeksforGeeks- 

// It is also available on Leetcode as - Two Sum 

bool keyPairs (vector<int> arr, int x){
    sort (arr.begin() , arr.end());
    int n = arr.size();
    int low =0;
    int high = n-1;
 
    while (left<right){
        int sum = arr[low] + arr[high];
        if(sum == x){
            return true; 
        }
        else if (sum < x) low ++;
        else high -- ;
    }

return false;


}


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 10;

    if (keyPairs(arr, x)) {
        cout << "Found a pair with sum " << x << endl;
    } else {
        cout << "No pair found with sum " << x << endl;
    }


 return 0;
}