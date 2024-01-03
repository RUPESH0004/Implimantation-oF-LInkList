#include <iostream>
#include <list>
using namespace std;

int main() {
    // Declare a list of integers
   list<int> myList;

    // Add elements to the list
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Iterate through the list and print its elements
    for (const auto& element : myList) {
        cout << element << " ";
    }

    cout << endl;

    // Insert an element at the beginning of the list
    myList.push_front(0);

    // Iterate through the list again and print its updated elements
    for (const auto& element : myList) {
        cout << element << " ";
    }

    return 0;
}

