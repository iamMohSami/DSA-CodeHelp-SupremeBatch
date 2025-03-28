#include<bits/stdc++.h>
using namespace std;


int main() {

    queue<int> q ; 

    // MEMBER FUNCTIONS 

    // 1. push : add element to queue
    q.push(10) ; //10
    q.push(20) ; // 10,20
    q.push(30) ; //10,20,30

    // 2. front : head/top element
    cout << "Front : " << q.front() << endl ; // 10

    // 3. back : last element
    cout << "Back : " << q.back() << endl ; // 30

    // 4. pop : remove element from queue
    q.pop() ; // 10 gets popped, (20,30)

    // 5. size
    cout << "Size : " << q.size() << endl ; // 2 

    // 6. empty
    cout << "Empty : " << (q.empty()? "Yes" : "No") << endl ; 

    // 7. swap
    queue<int> q2 ; 
    q2.push(40) ;
    q2.push(50) ;
    q.swap(q2) ; 

    // 8. emplace
    queue<int> qt ; 
    qt.emplace(10) ; 
    qt.emplace(11) ; 
    qt.emplace(120) ;
    qt.emplace(1) ;
    qt.emplace(15) ;

    // printing this queue
    while(!qt.empty()) {
        cout << qt.front() << " " ;
        qt.pop() ;
    }

    // There is NO ITERATOR in QUEUE
    // i.e. 
    // queue<int>::iterator it ; 
    // gives error : class "std::queue<int, std::deque<int, std::allocator<int>>>" has no member "iterator"C/C++(135)

     
    return 0 ; 
}