/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n=4;
    int i=0;
    while(i<n){
        int j = i+1,count = 0;
        while(count<i+1){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
    
}