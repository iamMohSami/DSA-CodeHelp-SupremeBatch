// Using Fill to put values in a Array

#include<bits/stdc++.h>
using namespace std ;

// Function to add 10 in each array value
void print(int funcArray[], int size) {
    for (int i = 0; i < size; i++) {
        cout << funcArray[i] << " ";
    }
}


int main(){
int arr[4];

// Use fill function to fill array with value 10
fill(arr, arr+4, 10);

//printing the array
for (int i = 0; i < 4; i++) {
    cout << arr[i] << " ";
}

//SIZE OF ARRAY 
/*
The size of an array can refer to two different things:
Total allocated size (capacity) – The number of blocks reserved in memory for the array.
Number of elements initialized – The actual count of meaningful elements stored in the array.
*/

// Finding tOTAL ALLOCATED SIZE 
int arr2[5] = {1,2} ; 
int blockSize = sizeof(arr2) / sizeof(arr2[0]);
cout << "\nNumber of Blocks: " << blockSize;

// Finding the Size of Array i.e. Number of Elements present in the Array
//Can only be done by using a Tracing Variable
// Getting Number of Initialized Elements (Non-Zero Elements)
int count = 0;
for (int i = 0; i < 5; i++) {
    if (arr2[i] != 0) count++;
}
std::cout << "\nInitialized elements: " << count << std::endl;

// arr[i] and i[arr] are same 
for (int i = 0; i <5; i++){
    cout << "arr[" << i << "] = " << arr[i] << ", i[" << i << "] = " << i[arr] << endl;  
}


// Passing and Recieving ARRAYS to a function
int myArray[10] = {1,2,3,4,5} ; 
int size = 5 ; 
print(myArray , size) ; 
}

