// WAP that overloads index new delete operators

#include <iostream>
using namespace std;

class Pair {
private:
    int x;
    int y;

public:
    Pair() : x(0), y(0) {}
    Pair(int a, int b) : x(a), y(b) {}
    // Overloading the index operator []
    int& operator[](int index) {
        cout << "Index operator called. Index: " << index << endl;
        if (index == 0)
            return x;
        if (index == 1)
            return y;
    }
    // Overloading the new operator
    void* operator new(size_t size) {
        cout << "Custom new operator called. Size: " << size << endl;
        return ::operator new(size); // Call the global new operator for memory allocation
    }

    // Overloading the delete operator
    void operator delete(void* ptr) {
        cout << "Custom delete operator called." << endl;
        ::operator delete(ptr); // Call the global delete operator for memory deallocation
    }

};

int main() {
    Pair* p = new Pair(10, 20);

    // Using the index operator
    cout << "Initial Pair: (" << (*p)[0] << ", " << (*p)[1] << ")" << endl;

    // Modify the Pair using the index operator
    (*p)[0] = 100;
    (*p)[1] = 200;
    cout << "Modified Pair: (" << (*p)[0] << ", " << (*p)[1] << ")" << endl;

    delete p;

    return 0;
}
