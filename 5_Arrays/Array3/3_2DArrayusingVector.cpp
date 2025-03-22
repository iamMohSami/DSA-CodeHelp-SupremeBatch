#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<vector<int>> arr, int target) {
    int rows = arr.size();
    int cols = arr[0].size();
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main () {
    //declaring and intializing a 2D Array using Vector with all values as 0 

    vector<vector<int>> arr(4, vector<int>(3, 0));
    int rows = arr.size(); 
    int cols = arr[0].size();

    // printing
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Linear Search
    int target;
    cout << "Enter the target number: ";
    cin >> target;
    bool result = linearSearch(arr, target);
    if(result) {
        cout << "Target found in the array" << endl;
    } else {
        cout << "Target not found in the array" << endl;
    }

    return 0;
}