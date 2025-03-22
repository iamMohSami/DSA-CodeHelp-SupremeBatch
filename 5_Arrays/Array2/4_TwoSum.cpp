#include <bits/stdc++.h>
using namespace std;

bool checkTwoSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

pair<int, int> firstPairFound(int arr[], int size, int target)
{
    // intializing the pairs as -1,-1 for NO ANY PAIR FOUND!!!
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans; // return the first pair found, no need to continue checking further
            }
        }
    }
    return ans; // return -1,-1 if no pair found

}

// Printing all possible pairs including Duplicates pairs
void TwoSumAllPairs(int arr[], int size, int target)
{
    cout << "ALL POSSIBLE PAIRS ARE: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
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

    int target;
    cout << "Enter the TARGET Value: ";
    cin >> target;

    // Only Check wheteher the Two Numbers are present in the Array whose sum is equal to the Target Value
    bool answer = checkTwoSum(arr, size, target);
    if (answer)
    {
        cout << "YES, Two Numbers are present in the Array whose sum is equal to the Target Value" << endl;
    }
    else
    {
        cout << "NO, Two Numbers are not present in the Array whose sum is equal to the Target Value" << endl;
    }

    // return a PAIR of first two elements whose sum is equal to the target value
    pair<int, int> result = firstPairFound(arr, size, target);
    if (result.first == -1 && result.second == -1)
    {
        cout << "NO PAIR FOUND" << endl;
    }
    else
    {
        cout << "PAIR FOUND: " << result.first << "," << result.second << endl;
    }

    // PRINTING ALL POSSIBLE PAIRS INCLUDING DUPLICATES
    TwoSumAllPairs(arr, size, target) ;

    return 0;
}