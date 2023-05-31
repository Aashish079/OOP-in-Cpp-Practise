// Replace ___ with your code

#include <iostream>
using namespace std;

// create Add class
class Add {
    public:

        // create add_number() function with int parameter num
        int add_number(int num) {

            // return the sum of num and 7
            return num + 7;
        }

        // create add_number() function with char parameter alpha
        // return the sum of alpha and 7
        // return type of this function must be char
        int add_number(char alpha){
            
            return alpha + 7;
        }
};

int main() {

    // create object of Add class
    Add obj;

    // create variables
    int number;
    char alpha;

    // get integer and char input    
    cin >> number >> alpha;

    // call function with number as parameter
    int result1 = obj.add_number(number);

    // call function with alpha as parameter
    char result2 = obj.add_number(alpha);

    // print result1 and result2    
    cout << result1 << endl;
    cout << result2 << endl;
  
    return 0;
}
