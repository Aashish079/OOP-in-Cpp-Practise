#include <iostream>
using namespace std;


int main(){
    int n = 5;

    int &ptr = n;

    ptr = 5;

    cout<<n;

}
