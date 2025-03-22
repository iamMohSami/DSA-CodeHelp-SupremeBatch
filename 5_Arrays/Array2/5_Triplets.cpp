#include <bits/stdc++.h>
using namespace std;

void printAllTriplets(int arr[], int size) // O(N^3)
{
    int count = 0;
    cout << "All Triplets : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                count++;
            }
        }
    }
    cout << "Total Triplets : " << count << endl;
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

    printAllTriplets(arr, size);

    return 0;
}