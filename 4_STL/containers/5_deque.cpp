#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Deque is nothing but "DOUBLY ENDED Queue" which is exactly the same thing as QUEUE with only one new functionality i.e
    // insert and delete operations from both ends i.e. push and pop from both ends
    // whereas, in normal queues, only PUSH at back and POP at front

    // ALL MEMBER FUNCTIONS like VECTOR 

    deque<int> dq;

    // Insertion at front and back
    dq.push_back(1); // 1
    dq.push_back(2); // 1 -> 2
    dq.push_back(3); // 1 -> 2 -> 3

    dq.push_front(0); // 0 -> 1 -> 2 -> 3
    dq.push_front(100) ; // 100 -> 0 -> 1 -> 2 -> 3

    // Deletion from front and back
    cout << dq.front() << endl ; // 100
    dq.pop_front(); // 0 -> 1 -> 2 -> 3

    cout << dq.back() << endl; // 3
    dq.pop_back(); // 0 -> 1 -> 2

    // Accessing elements from both ends
    cout << dq.front() << endl; // 0
    cout << dq.back() << endl ; // 2

    // Checking if deque is empty
    cout << (dq.empty()? "Deque is empty" : "Deque is not empty");

    // Size of deque
    cout << "\nSize of deque is: " << dq.size() <<endl ;

    // iterators? YES
    deque<int>::iterator it;
    for (it = dq.begin(); it != dq.end(); it++)
        cout  << *it << '|';



   
    return 0;
}