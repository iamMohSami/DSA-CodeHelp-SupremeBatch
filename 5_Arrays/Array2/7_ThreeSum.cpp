#include <bits/stdc++.h>
using namespace std;

// NOTE : this Threesum Function is not the PERFECT i.e. as asked in LEETCODE
// Here, we are taking into account all the pairs, repitative, duplicates and evrything

void ThreeSum(int arr[], int size, int target) // O(N^3)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the Size of Array : ";
    cin >> size;
    int target;
    cout << "Enter the Target Sum : ";
    cin >> target;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element :";
        cin >> arr[i];
    }

    ThreeSum(arr, size, target);

    return 0;
}