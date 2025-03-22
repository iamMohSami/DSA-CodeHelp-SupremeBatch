#include <bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int size)
{
    cout << "Printing all Pairs" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << "    ";
        }
        cout << endl;
    }
}

void printOnlyLowerTriangle(int arr[], int size)
{
    cout << "Printing only Lower Triangle" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << "    ";
        }
        cout << endl;

    }
}

void printOnlyUpperTriangle(int arr[], int size)
{
    cout << "Printing only Upper Triangle" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i > j)
                continue;
            else
            {
                cout << arr[i] << "," << arr[j] << "    ";
            }
        }
        cout << endl;

    }
}

void pattern4(int arr[], int size)
{
    cout << "Printing Pattern 4" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << arr[i] << "," << arr[j] << "    ";
        }
        cout << endl;

    }
}

void pattern5(int arr[], int size)
{
    cout << "Printing Pattern 5" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i] << "," << arr[j] << "    ";
        }
        cout << endl;

    }
}


void pattern6(int arr[], int size)
{
    cout << "Printing Pattern 4" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j >= 0; j--)
        {
            cout << arr[i] << "," << arr[j] << "    ";
        }
        cout << endl;

    }
}


void pattern7(int arr[], int size)
{
    cout << "Printing Pattern 4" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j > i; j--)
        {
            cout << arr[i] << "," << arr[j] << "    ";
        }
        cout << endl;

    }
}

int main()
{
    int size;
    cout << "Enter the Size of Array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element :";
        cin >> arr[i];
    }

    // pattern1
    printAllPairs(arr, size);
    // pattern2
    printOnlyLowerTriangle(arr, size);
    // pattern3
    printOnlyUpperTriangle(arr, size);
    // pattern4
    pattern4(arr, size);
    // pattern5
    pattern5(arr, size);
    // pattern6
    pattern6(arr, size);
    // pattern7
    pattern7(arr, size);

    return 0;
}