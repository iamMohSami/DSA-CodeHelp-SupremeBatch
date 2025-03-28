#include<bits/stdc++.h> 
using namespace std;
int main() { 
    list<int> myList ; 

    // MEMBER FUNCTIONS 

    // 1. push_back()
    myList.push_back(10);  // 10
    myList.push_back(20);  // 10 -> 20
    myList.push_back(30);  // 10 -> 20 -> 30

    // 2. push_front()
    myList.push_front(5);  // 5 -> 10 -> 20 -> 30
    myList.push_front(1);  // 1 -> 5 -> 10 -> 20 -> 30

    // 3. pop_back()
    myList.pop_back();  // 1 -> 5 -> 10 -> 20
    myList.pop_back();  // 1 -> 5 -> 10

    // 4. pop_front()
    myList.pop_front();  // 5 -> 10


    // 5. front()
    cout << "Front : " << myList.front() << endl;  // Front : 5 (HEAD)

    // 6. back()
    cout << "Back : " << myList.back() << endl;  // Back : 10 (TAIL)

    // 7. size()
    cout << "Size : " << myList.size() << endl;  // Size : 2

    // 8. empty()
    cout << "Is List Empty? : " << (myList.empty()? "Yes" : "No") << endl;  // Is List Empty? : No

    // 9. clear() 
    myList.clear();
    cout << "Size after clear : " << myList.size() << endl;  // Size after clear : 0

    // 10. begin() and end() 
    list<int> prices ;
    prices.push_back(100) ;
    prices.push_back(200) ;
    prices.push_back(300) ;
    prices.push_front(50) ;  
    prices.push_back(100) ;

    list<int>::iterator it = prices.begin() ; 
    while(it!= prices.end()){
        cout << *(it) << " ";
        it++ ;
    }
    cout << endl ; 

    // 11. remove(x) : deletes all occurences of x
    prices.remove(100) ;
    it = prices.begin() ; 
    while(it!= prices.end()){
        cout << *(it) << " ";
        it++ ;
    }

    // 12. insert() 
    // prices.insert(prices.begin() + 1 ,  50) ;    NOT POSSIBLE TO use +1 as list do not support random access iterators

    //instead 
    it = prices.begin() ;
    it = next(it) ; 
    prices.insert(it, 50) ;  // 50 -> 100 -> 200 -> 300 -> 100
    cout << "\nAfter Insert : " << endl ;  
    while(it!= prices.end()){
        cout << *(it) << " ";
        it++ ;
    }
    cout << endl ;

}