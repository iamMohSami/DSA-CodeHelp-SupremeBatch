#include <bits/stdc++.h>
using namespace std;

// Normal function passing by specifying the number of columns.
void printEntire2DArray(int rS, int cS, int arr[][3])
{
    cout << "Printing using Normal Function Passing by mentioning the cols of the array" << endl;
    for (int i = 0; i < rS; i++)
    {
        for (int j = 0; j < cS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // New line after each row.
    }
}

// Template function to pass 2D array
template <size_t rows, size_t cols>
void printEntire2DArrayTemplate(int (&arr)[rows][cols])
{
    cout << "Printing using Template Function" << endl;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}

int main()
{
    // Declaring and Initializing a 2D array with 4 rows and 3 columns.
    int arr2[4][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9},
                      {10, 11, 12}};

    // Accessing some cells.
    cout << arr2[0][1] << endl; // Output: 2
    cout << arr2[1][2] << endl; // Output: 6

    int rowSize = 4;
    int colSize = 3;

    // Calling the normal function to print the array
    printEntire2DArray(rowSize, colSize, arr2);

    // For using the template function, let's declare another 2D array.
    int arrtemplate[4][4] = {{10, 20, 30, 40},
                             {20, 30, 40, 40},
                             {30, 40, 50, 60},
                             {40, 50, 60, 70}};
    printEntire2DArrayTemplate(arrtemplate);

    // Using Fill method to fill the array with values
    int arrFill[4][3];
    // loop over each row
    for (int i = 0; i < 4; i++)
    {
        // fill each row with value 10*i
        fill(arrFill[i], arrFill[i] + 3, 10 * i);
    }
    // Printing the filled array using the normal function.
    printEntire2DArray(4, 3, arrFill);

    // PRINTING/ACCESSING Values methods/patterns
    // 1. Row-Wise traversal (i.e. Fixing the row and changing the column)
    // 2. Column-Wise traversal (i.e. Fixing the column and changing the row)
    // 3. Diagonal traversal (Left to Right traversal AND Right to Left traversal)

    int myArr[3][3] = {{12, 14, 25}, {63, 48, 33}, {22, 11, 44}};
    // 1. Row-Wise traversal
    cout << "Row-Wise Traversal" << endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << myArr[r][c] << " ";
        }
        cout << endl;
    }
    // 2. Column-Wise traversal
    cout << "Column-Wise Traversal" << endl;
    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            cout << myArr[r][c] << " ";
        }
        cout << endl;
    }
    // 3. Diagonal Traversal
    cout << "Diagonal Traversal [Left->Right]" << endl;
    // for (int r = 0; r < 3; r++) TAKES 0(N^2) time
    // {
    //     for (int c = 0; c < 3; c++)
    //     {
    //         if (r == c)
    //             cout << myArr[r][c] << " ";
    //     }
    // }

    // using O(n) time
    for(int r=0 ; r<3 ; r++){
        cout << myArr[r][r] << " ";
    }

    //4. Diagonal Traversal [Right->Left]
    cout << "\nDiagonal Traversal [Right->Left]" << endl;
    for(int r=0 ; r<3 ; r++){
        for(int c=0 ; c < 3; c++){
            if(r + c == 2)
                cout << myArr[r][c] << " ";
        }
    }
}